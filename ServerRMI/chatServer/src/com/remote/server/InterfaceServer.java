package com.remote.server;

import java.rmi.Remote;
import java.rmi.RemoteException;
import com.remote.client.InterfaceClient;
import java.util.ArrayList;
import java.util.List;
import java.util.Vector;


public interface InterfaceServer extends Remote{
    //função para distribuir uma mensagem para todos os clientes conectados
    void broadcastMessage(String message,List<String> list) throws RemoteException;
    
    //função para distribuir um arquivo compartilhado para todos os clientes conectados
    void broadcastMessage(ArrayList<Integer> inc,List<String> list,String filename) throws RemoteException;
    
    //função para recuperar o nome dos clientes conectados
    Vector<String> getListClientByName(String name) throws RemoteException;
    
    //função para adicionar um cliente conectado à lista de clientes conectados
    void addClient(InterfaceClient client) throws RemoteException;
    
    //função para bloquear um cliente de enviar uma mensagem, mas ele pode obter as mensagens
    void blockClient(List<String> clients) throws RemoteException;
    
    //função para remover completamente uma lista de clientes do chat (kick-out)
    void removeClient(List<String> clients) throws RemoteException;
    
    //função para deletar completamente um único cliente de bate-papo (kick-out).
    void removeClient(String clients) throws RemoteException;
    
    //função para ativar um cliente no chat, depois de estar no caso de "bloquear"
    void reactiveClient(List<String> clients) throws RemoteException;
    
    //função para verificar se um nome de usuário já existe no servidor ou não, porque o nome de usuário é o identificador no chat
    boolean checkUser(String username, String password, Boolean newUser) throws RemoteException;
}