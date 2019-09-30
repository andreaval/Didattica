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
public class TimerMultipli {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Giudice g = new Giudice();
        Timer t1 = new Timer("t1",10,g);
        Timer t2 = new Timer("t2",10,g);
        t1.start();
        t2.start();
        g.daiIlVia();
        try{
            t1.join();
            t2.join();
            System.out.println("Ha finito per primo il timer "+g.getVincitore());
        }
        catch(Exception e){
            System.out.println("Errore nel conteggio");
        }
    }
    
}
