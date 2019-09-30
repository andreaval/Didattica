/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package timermultipli;

/**
 *
 * @author andrea
 */
public class Timer extends Thread{
    
    private int partenza;
    private String nome;
    private Giudice g;
    
    public Timer(String nome,int da,Giudice g){
        this.nome = nome;
        this.partenza = da;
        this.g = g;
    }
    
    public void run(){
        System.out.println(this.nome+" pronto");
        while(g.via==0){
            //
        }
        System.out.println("conteggio "+this.nome);
        while(this.partenza>0){
            this.partenza--;
        }
        this.g.hoFinito(this.nome);
    }
}
