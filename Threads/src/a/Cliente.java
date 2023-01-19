/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package a;

/**
 *
 * @author utfpr
 */
public class Cliente extends Thread  {
    
    
    boolean fechoubar, pedido = false;
    public Cliente(boolean fechoubar){
        this.fechoubar = fechoubar;
    }
    
    public void run(){
        while(!fechoubar){
            fazPedido();
            /*esperaPedido();
            recebePedido();
            consomePedido();*/
        }
    }
    
    public void fazPedido(){
        System.out.println("fez um pedido.");
        pedido = true;
    }
}
