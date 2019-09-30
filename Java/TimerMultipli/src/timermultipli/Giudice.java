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
public class Giudice {
    public volatile int via = 0;
    private String winner = null;
    
    synchronized public void hoFinito(String name){
        if(this.winner == null){
            this.winner = name;
        }
    }
    
    public void daiIlVia(){
        System.out.println("Pronti ... Partenza ... Via!!");
        this.via = 1;
    }
    
    public String getVincitore(){
        return this.winner;
    }
}
