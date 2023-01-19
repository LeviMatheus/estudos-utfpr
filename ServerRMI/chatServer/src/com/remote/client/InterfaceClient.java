package com.remote.client;

import java.rmi.Remote;
import java.rmi.RemoteException;
import java.util.ArrayList;
import java.util.List;


public interface InterfaceClient extends Remote{
    //recuperar mensagens da discussão do servidor
    void retrieveMessage(String message) throws RemoteException;
    
    //recuperar arquivos compartilhados da discussão do servidor
    void retrieveMessage(String filename,ArrayList<Integer> inc) throws RemoteException;
    
    //função para enviar uma mensagem de um cliente para o servidor
    void sendMessage(List<String> list) throws RemoteException;
    
    //função para recuperar o nome dos clientes conectados (identificador de cliente) ==> nome de usuário
    String getName()throws RemoteException;
    
    //desabilitar um cliente a funcionalidade para enviar uma mensagem
    void closeChat(String message) throws RemoteException;
    
    //habilitar um cliente a funcionalidade para enviar uma mensagem
    void openChat() throws RemoteException;
}
