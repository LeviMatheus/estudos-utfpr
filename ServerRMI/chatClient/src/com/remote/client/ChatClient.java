package com.remote.client;

import com.remote.server.InterfaceServer;
import java.awt.Cursor;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextArea;


public class ChatClient extends UnicastRemoteObject implements InterfaceClient{
    private final InterfaceServer server;
    private final String name;
    private final JTextArea input;
    private final JTextArea output;
    private final JPanel jpanel;
    
    //construtor
    public ChatClient(String name , InterfaceServer server,JTextArea jtext1,JTextArea jtext2,JPanel jpanel) throws RemoteException{
        this.name = name;
        this.server = server;
        this.input = jtext1;
        this.output = jtext2;
        this.jpanel = jpanel;
        server.addClient(this);
    }
    
    //função para recuperar mensagens da discussão do servidor
    @Override
    public void retrieveMessage(String message) throws RemoteException {
        output.setText(output.getText() + "\n" + message);
    }
    
    // função para recuperar arquivos compartilhados do chat do servidor
    @Override
    public void retrieveMessage(String filename, ArrayList<Integer> inc) throws RemoteException {
        JLabel label = new JLabel("<HTML><U><font size=\"4\" color=\"#365899\">" + filename + "</font></U></HTML>");
        label.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
        label.addMouseListener(new MouseListener() {
            @Override
            public void mouseClicked(MouseEvent e) {
                try {
                    FileOutputStream out;
                    String separator;
                    if(System.getProperty("os.name").startsWith("Linux") || System.getProperty("os.name").startsWith("MacOS")) separator = "/";
                    else separator = "\\";
                    out = new FileOutputStream(System.getProperty("user.home") + separator + filename);
                    String[] extension = filename.split("\\.");
                    for (int i = 0; i<inc.size(); i++) {
                        int cc = inc.get(i);
                        if(extension[extension.length - 1].equals("txt")||
                                extension[extension.length - 1].equals("java")||
                                extension[extension.length - 1].equals("php")||
                                extension[extension.length - 1].equals("c")||
                                extension[extension.length - 1].equals("cpp")||
                                extension[extension.length - 1].equals("xml")
                                )
                        out.write((char)cc);
                        else{
                            out.write((byte)cc);
                        }
                    }
                    out.flush();
                    out.close();
                    JOptionPane.showMessageDialog(new JFrame(),"arquivo foi salvo em " + System.getProperty("user.home") + separator + filename,"File Saved",JOptionPane.INFORMATION_MESSAGE);
                } catch (FileNotFoundException ex) {
                    System.out.println("Error: " + ex.getMessage());
                } catch (IOException ex) {
                    System.out.println("Error: " + ex.getMessage());
                }             
            }

            @Override
            public void mousePressed(MouseEvent e) {}

            @Override
            public void mouseReleased(MouseEvent e) {}

            @Override
            public void mouseEntered(MouseEvent e) {}

            @Override
            public void mouseExited(MouseEvent e) {}
        });
        jpanel.add(label);
        jpanel.repaint();
        jpanel.revalidate();
    }
    
    //função para enviar uma mensagem para o servidor
    @Override
    public void sendMessage(List<String> list) {
        try {
            server.broadcastMessage(name + " : " + input.getText(),list);
        } catch (RemoteException ex) {
            System.out.println("Error: " + ex.getMessage());
        }
    }
    
    //função para recuperar o nome de um cliente conectado
    @Override
    public String getName() {
        return name;
    }

    //função para desabilitar um cliente a funcionalidade para enviar uma mensagem
    @Override
    public void closeChat(String message) throws RemoteException {
        input.setEditable(false);
        input.setEnabled(false);
        JOptionPane.showMessageDialog(new JFrame(),message,"Alert",JOptionPane.WARNING_MESSAGE); 
    }

    //função para habilitar um cliente a funcionalidade para enviar uma mensagem
    @Override
    public void openChat() throws RemoteException {
        input.setEditable(true);
        input.setEnabled(true);    
    }
}