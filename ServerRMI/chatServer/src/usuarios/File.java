package usuarios;

/**
 *
 * @author renan
 */
public class File {
    // Não sei exatamente quais valores colocar
    // Lembrando que na maioria dos Linux não tem uma tabela desnecessariamente grande
    // Assim não tem tantos valores como no Windows
    // Os que tem são, em suma, esses, (além do nome e permissões do arquivo)
    private static String dataModificacao;
    private static String tipo;
    private static String ultimaVezLido;
    // O usuário pode compartilhar os arquivos, isso vai complicar muito
    // Provavelmente vai ter que criar um txt dentro do usuário, informando quais são os arquivos
    // Que estão compartilhados com ele
    private static String[] compartilhado;
    
}
