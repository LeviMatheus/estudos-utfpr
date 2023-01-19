package com.remote.server;

import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.util.ArrayList;
import com.remote.client.InterfaceClient;
import java.util.List;
import java.util.Vector;
import java.util.logging.Level;
import java.util.logging.Logger;
import senha.Senhas;

public class ChatServer extends UnicastRemoteObject implements InterfaceServer {

    private final ArrayList<InterfaceClient> clients; //lista contém todos os clientes, mas que não estão bloqueados
    private final ArrayList<InterfaceClient> blockedClients; //lista contém todos os clientes bloqueados

    //constructeur
    public ChatServer() throws RemoteException {
        super();
        this.clients = new ArrayList<>();
        blockedClients = new ArrayList<>();
    }

    //broadcast da mensagem para todos os clientes conectados, ou uma lista presidida pelo cliente (chat privado)
    @Override
    public synchronized void broadcastMessage(String message, List<String> list) throws RemoteException {
        if (list.isEmpty()) {
            int i = 0;
            while (i < clients.size()) {
                clients.get(i++).retrieveMessage(message);
            }
        } else {
            for (InterfaceClient client : clients) {
                for (int i = 0; i < list.size(); i++) {
                    if (client.getName().equals(list.get(i))) {
                        client.retrieveMessage(message);
                    }
                }
            }
        }
    }

    //distribuir um arquivo para todos os clientes conectados, ou uma lista presidida pelo cliente (chat privado)
    @Override
    public synchronized void broadcastMessage(ArrayList<Integer> inc, List<String> list, String filename) throws RemoteException {
        if (list.isEmpty()) {
            int i = 0;
            while (i < clients.size()) {
                clients.get(i++).retrieveMessage(filename, inc);
            }
        } else {
            for (InterfaceClient client : clients) {
                for (int i = 0; i < list.size(); i++) {
                    if (client.getName().equals(list.get(i))) {
                        client.retrieveMessage(filename, inc);
                    }
                }
            }
        }
    }

    //função para adicionar um cliente conectado à lista de clientes no servidor
    @Override
    public synchronized void addClient(InterfaceClient client) throws RemoteException {
        this.clients.add(client);
    }

    //função para recuperar o nome dos clientes conectados
    @Override
    public synchronized Vector<String> getListClientByName(String name) throws RemoteException {
        Vector<String> list = new Vector<>();
        for (InterfaceClient client : clients) {
            if (!client.getName().equals(name)) {
                list.add(client.getName());
            }
        }
        return list;
    }

    //função para bloquear um cliente de enviar uma mensagem, mas ele pode obter as mensagens
    @Override
    public synchronized void blockClient(List<String> clients) {
        for (int j = 0; j < this.clients.size(); j++) {
            for (int i = 0; i < clients.size(); i++) {
                try {
                    if (this.clients.get(j).getName().equals(clients.get(i))) {
                        this.clients.get(j).closeChat(clients + " você foi bloqueado pelo adminitrador");
                        blockedClients.add(this.clients.get(j));
                    }
                } catch (RemoteException ex) {
                    System.out.println("Error: " + ex.getMessage());
                }
            }
        }
    }

    //função para remover completamente uma lista de clientes do chat (kick-out)
    @Override
    public synchronized void removeClient(List<String> clients) {
        for (int j = 0; j < this.clients.size(); j++) {
            for (int i = 0; i < clients.size(); i++) {
                try {
                    if (this.clients.get(j).getName().equals(clients.get(i))) {
                        this.clients.get(j).closeChat(clients.get(i) + " você foi removido do chat");
                        this.clients.remove(j);
                    }
                } catch (RemoteException ex) {
                    System.out.println("Error: " + ex.getMessage());
                }
            }
        }
    }

    //função para deletar completamente um único cliente de bate-papo (kick-out)
    @Override
    public synchronized void removeClient(String clients) {
        for (int j = 0; j < this.clients.size(); j++) {
            try {
                if (this.clients.get(j).getName().equals(clients)) {
                    this.clients.remove(j);
                }
            } catch (RemoteException ex) {
                System.out.println("Error: " + ex.getMessage());
            }
        }
    }

    //função para ativar um cliente no chat, depois de estar no caso de "bloquear"
    @Override
    public synchronized void reactiveClient(List<String> clients) throws RemoteException {
        for (int j = 0; j < this.blockedClients.size(); j++) {
            for (int i = 0; i < clients.size(); i++) {
                try {
                    if (this.blockedClients.get(j).getName().equals(clients.get(i))) {
                        this.blockedClients.get(j).openChat();
                        this.blockedClients.remove(j);
                    }
                } catch (RemoteException ex) {
                    System.out.println("Error: " + ex.getMessage());
                }
            }
        }
    }

    //função para verificar se o nome de usuário já existe no servidor ou não, porque o nome de usuário é o identificador no chat
    @Override
    public boolean checkUser(String username, String password, Boolean newUser) throws RemoteException {
        Senhas user = new Senhas();
        System.out.println(password);
        try {
            if (newUser) {
                if(!user.verificaOnlyUsers(username))
                {
                    user.criaNewUser(username, password);
                    return true;
                }
            } else {
                if (user.verificaUsers(username, password)) {
                    boolean exist = true;
                    for (int i = 0; i < clients.size(); i++) {
                        if (clients.get(i).getName().equals(username)) {
                            exist = false;
                        }
                    }
                    for (int i = 0; i < blockedClients.size(); i++) {
                        if (blockedClients.get(i).getName().equals(username)) {
                            exist = false;
                        }
                    }
                    return exist;
                }
            }
        } catch (Exception ex) {
            Logger.getLogger(ChatServer.class.getName()).log(Level.SEVERE, null, ex);
        }
        return false;
    }
}
