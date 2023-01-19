package usuarios;

/**
 *
 * @author renan
 */
public class Users {
    private static String nome;
    private static String pwd;
    public static Boolean compatilhado = false;
    public static final String path = "C://Users//levim//Downloads//trabDrive//";
    // Minha do Windows = C:/Users/renan/OneDrive/Documentos/trabDrive/
    // Minha do Linux = /home/renan/trabDrive/
    // Altere essa variável para o seu path padrão
    // (onde vão ficar os arquivos do server)

    public static String getPwd() {
        return pwd;
    }

    public static void setPwd(String pathAtual) {
        Users.pwd = pathAtual;
    }

    public static String getNome() {
        return nome;
    }

    public static void setNome(String nome) {
        Users.nome = nome;
    }
    
    
}
