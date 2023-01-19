package a;

import com.sun.javafx.scene.layout.region.Margins;
import java.io.Console;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author utfpr
 */

public class Main {
    /*static Conta c = new Conta();
    public static void main(String[] args) {
       
       Thread d = new Deposito(c);
       Thread r = new Retirada(c);
       d.start();
       r.start();
       try{
           d.join();
           r.join();
       }catch(InterruptedException e){
           System.out.println(""+e);
       }
       
       System.out.println("Saldo=" + c.saldo);
    }*/
    public static void main(String[] args){
        int clientes, garcons, capG, rodadas;
        boolean fechoubar = false;
        Scanner in = new Scanner(System.in);
        // garçons
        System.out.println("Quantidade de garçons: ");
        garcons = in.nextInt();
        // clientes
        System.out.println("Quantidade de clientes: ");
        clientes = in.nextInt();
        //capacidade de clientes/garçom
        System.out.println("Quantidade de clientes/garçom");
        capG = in.nextInt();
        //rodadas
        System.out.println("Quantidades de rodadas");
        rodadas = in.nextInt();
        
        List<Garcom> listG = new ArrayList<>(garcons);
        List<Cliente> listC = new ArrayList<>(clientes);

        //Criando as threads
        for(int x = 0;x<garcons;x++)
        {
            listG.add(new Garcom(fechoubar));
            listG.get(x).setName("G"+x);
        }
        for(int m=0;m<clientes;m++){
           listC.add(new Cliente(fechoubar));
           listC.get(m).setName("C"+m);
        }
    }
}