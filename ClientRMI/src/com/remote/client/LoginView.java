package com.remote.client;

import com.remote.server.InterfaceServer;
import java.awt.Toolkit;
import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.util.Arrays;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.UIManager;
import javax.swing.plaf.ColorUIResource;

public class LoginView extends javax.swing.JFrame {

    private InterfaceServer server;

    public LoginView() {
        initComponents();
        this.setLocationRelativeTo(null);
        this.getContentPane().setBackground(new java.awt.Color(52, 58, 64));
        //setIconImage(Toolkit.getDefaultToolkit().getImage(getClass().getResource("/com/remote/client/login.png")));
        try {
            server = (InterfaceServer) Naming.lookup("rmi://localhost:4321/remote");
        } catch (NotBoundException | MalformedURLException | RemoteException ex) {
            System.out.println("Error: " + ex.getMessage());
        }
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        btnLogin = new javax.swing.JButton();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        txtUser = new javax.swing.JTextField();
        jComboBox1 = new javax.swing.JComboBox<>();
        btnSignUp = new javax.swing.JButton();
        jLabel3 = new javax.swing.JLabel();
        txtPassword = new javax.swing.JPasswordField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Log in");
        setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        setResizable(false);

        btnLogin.setBackground(new java.awt.Color(52, 58, 64));
        btnLogin.setFont(new java.awt.Font("Dialog", 1, 14)); // NOI18N
        btnLogin.setForeground(new java.awt.Color(40, 167, 69));
        btnLogin.setText("Log in");
        btnLogin.setToolTipText("");
        btnLogin.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        btnLogin.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseExited(java.awt.event.MouseEvent evt) {
                btnLoginMouseExited(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                btnLoginMouseEntered(evt);
            }
        });
        btnLogin.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnLoginActionPerformed(evt);
            }
        });

        jLabel1.setFont(new java.awt.Font("Dialog", 1, 14)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setText("Usuário");

        jLabel2.setFont(new java.awt.Font("Dialog", 1, 14)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(255, 255, 255));
        jLabel2.setText("Autorização");
        jLabel2.setToolTipText("");

        txtUser.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtUserActionPerformed(evt);
            }
        });

        jComboBox1.setFont(new java.awt.Font("Dialog", 0, 14)); // NOI18N
        jComboBox1.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Simple User", "Administrator" }));

        btnSignUp.setBackground(new java.awt.Color(52, 58, 64));
        btnSignUp.setFont(new java.awt.Font("Dialog", 1, 14)); // NOI18N
        btnSignUp.setForeground(new java.awt.Color(0, 123, 255));
        btnSignUp.setText("Registrar-se");
        btnSignUp.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseExited(java.awt.event.MouseEvent evt) {
                btnSignUpMouseExited(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                btnSignUpMouseEntered(evt);
            }
        });
        btnSignUp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSignUpActionPerformed(evt);
            }
        });

        jLabel3.setFont(new java.awt.Font("Dialog", 1, 14)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(255, 255, 255));
        jLabel3.setText("Senha");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(btnLogin, javax.swing.GroupLayout.PREFERRED_SIZE, 108, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnSignUp, javax.swing.GroupLayout.PREFERRED_SIZE, 113, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                        .addGap(14, 14, 14)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel1)
                            .addComponent(jLabel3)
                            .addComponent(jLabel2))
                        .addGap(27, 27, 27)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(txtUser)
                            .addComponent(jComboBox1, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(txtPassword))
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap(42, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(13, 13, 13)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(txtUser, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(txtPassword, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel2))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 34, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(btnLogin)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(btnSignUp, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addGap(1, 1, 1)))
                .addGap(20, 20, 20))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    //a ação quando um cliente vai entrar no chat, em primeiro lugar verificar se o nome de usuário já existe
    private void btnLoginActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLoginActionPerformed
        String tipo = (String) jComboBox1.getSelectedItem();
        if (txtUser.getText().isEmpty() || txtPassword.getPassword().length == 0 || txtUser.getText().contains(" ")) {
            UIManager UI = new UIManager();
            UI.put("OptionPane.background", new ColorUIResource(52, 58, 64));
            UI.put("Panel.background", new ColorUIResource(52, 58, 64));
            JOptionPane.showMessageDialog(this, "Por favor, preencha os campos de usuário e senha.", "Alert", JOptionPane.WARNING_MESSAGE);
            
        } else {
            try {
                if (txtUser.getText().equals("renan")) {
                    if (server.checkUser(txtUser.getText(), String.valueOf(txtPassword.getPassword()), false)) {
                        new ChatView(txtUser.getText(), tipo, server).setVisible(true);
                        this.dispose();
                    } else {
                        JOptionPane.showMessageDialog(new JFrame(), "Nome de Usuário ou senha incorretos", "Alert", JOptionPane.WARNING_MESSAGE);
                    }
                } else if (tipo.equals("Administrator")) {
                    JOptionPane.showMessageDialog(new JFrame(), "Você não tem os privilégios selecionados", "Alert", JOptionPane.WARNING_MESSAGE);
                } else {
                    if (server.checkUser(txtUser.getText(), String.valueOf(txtPassword.getPassword()), false)) {
                        new ChatView(txtUser.getText(), "Simple User", server).setVisible(true);
                        this.dispose();
                    } else {
                        JOptionPane.showMessageDialog(new JFrame(), "Nome de Usuário ou senha incorretos", "Alert", JOptionPane.WARNING_MESSAGE);
                    }
                }
            } catch (RemoteException ex) {
                JOptionPane.showMessageDialog(this, "Error!! A remoteException occurred in the server. \n\nTry to: \n- Restart the server \n- Change the port", "Alert", JOptionPane.WARNING_MESSAGE);
                System.out.println("Error: " + ex.getMessage());
            }
        }
    }//GEN-LAST:event_btnLoginActionPerformed

    private void txtUserActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtUserActionPerformed

    }//GEN-LAST:event_txtUserActionPerformed

    private void btnSignUpActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSignUpActionPerformed
        InterfaceRegister ir = new InterfaceRegister();
        ir.setVisible(true);
        dispose();
    }//GEN-LAST:event_btnSignUpActionPerformed

    private void btnLoginMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_btnLoginMouseEntered
        btnLogin.setForeground(new java.awt.Color(52, 58, 64));
        btnLogin.setBackground(new java.awt.Color(40, 167, 69));
    }//GEN-LAST:event_btnLoginMouseEntered

    private void btnLoginMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_btnLoginMouseExited
        btnLogin.setForeground(new java.awt.Color(40, 167, 69));
        btnLogin.setBackground(new java.awt.Color(52, 58, 64));
    }//GEN-LAST:event_btnLoginMouseExited

    private void btnSignUpMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_btnSignUpMouseEntered
        btnSignUp.setForeground(new java.awt.Color(52, 58, 64));
        btnSignUp.setBackground(new java.awt.Color(0, 123, 255));
    }//GEN-LAST:event_btnSignUpMouseEntered

    private void btnSignUpMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_btnSignUpMouseExited
        btnSignUp.setForeground(new java.awt.Color(0, 123, 255));
        btnSignUp.setBackground(new java.awt.Color(52, 58, 64));
    }//GEN-LAST:event_btnSignUpMouseExited

    //main
    public static void main(String args[]) {
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException | InstantiationException | IllegalAccessException | javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(LoginView.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }

        java.awt.EventQueue.invokeLater(() -> {
            new LoginView().setVisible(true);
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnLogin;
    private javax.swing.JButton btnSignUp;
    private javax.swing.JComboBox<String> jComboBox1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JPasswordField txtPassword;
    private javax.swing.JTextField txtUser;
    // End of variables declaration//GEN-END:variables
}
