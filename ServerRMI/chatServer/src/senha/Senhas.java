package senha;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.math.BigInteger;
import java.security.MessageDigest;
import usuarios.Users;

/**
 *
 * @author renan
 */
public class Senhas {

    //Cara, isso aqui só verifica se tem algum usuário compativel no arquivo txt
    public boolean verificaUsers(String user, String password) throws Exception {
        FileReader fileReader = new FileReader(Users.path + "users.txt");

        try (BufferedReader bufferedReader = new BufferedReader(fileReader)) {
            String linha = null;
            password = getMd5(password);
            while ((linha = bufferedReader.readLine()) != null) {
                int tamanho = linha.length();
                String[] newAtributo = new String[tamanho];
                newAtributo = linha.split("\\s+");
                if (newAtributo[0].equals(user) && newAtributo[1].equals(password)) {
                    return true;
                }
            }
        } catch (Exception e) {
            System.out.println(e);
        }
        return false;
    }

    public boolean verificaOnlyUsers(String user) throws Exception {
        FileReader fileReader = new FileReader(Users.path + "users.txt");

        try (BufferedReader bufferedReader = new BufferedReader(fileReader)) {
            String linha = null;
            while ((linha = bufferedReader.readLine()) != null) {
                int tamanho = linha.length();
                String[] newAtributo = new String[tamanho];
                newAtributo = linha.split("\\s+");
                if (newAtributo[0].equals(user)) {
                    return true;
                }
            }
        } catch (Exception e) {
            System.out.println(e);
        }
        return false;
    }

    // Isso aqui faz um hash simples MD5
    public String getMd5(String s) throws Exception {
        MessageDigest m = MessageDigest.getInstance("MD5");
        m.update(s.getBytes(), 0, s.length());
        return new BigInteger(1, m.digest()).toString(16);
    }

    public void criaNewUser(String userName, String pass) throws IOException, Exception {
        try {
            FileWriter fw = new FileWriter(Users.path + "users.txt", true);
            BufferedWriter con = new BufferedWriter(fw);
            // Criptografa a Senha com um Hash MD5 padrão
            System.out.println(pass);
            System.out.println(getMd5(pass));
            String s = userName + " " + getMd5(pass);
            con.write(s);
            con.newLine();
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }

    }

    public static boolean compartilhar(String comquem, String arq) throws IOException {
        FileWriter fw = new FileWriter(Users.path + comquem + ".txt", true);
        BufferedWriter con = new BufferedWriter(fw);
        String arquivo = arq;
        con.write(arquivo);
        con.newLine();
        con.close();
        return true;
    }

    public static String getCompartilhados(String quem) throws IOException {
        FileReader fileReader = new FileReader(Users.path + quem + ".txt");
        try (BufferedReader bufferedReader = new BufferedReader(fileReader)) {
            String linha = null;
            String valor = "";
            while ((linha = bufferedReader.readLine()) != null) {
                valor += linha + "\n";
            }
            return valor;
        } catch (Exception e) {
            System.out.println(e);
        }
        return "";
    }
}
