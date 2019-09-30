/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fattoriali;

/**
 *
 * @author andrea
 */
public class Fattoriale extends Thread{
    int n;
    
    public Fattoriale(int numero){
        this.n = numero;
    }
    
    public void run(){
        int fatt = 1;
        int temp = this.n;
        while(temp>1){
            fatt = fatt*temp;
            temp--;
        }
        System.out.println("Fattoriale di "+this.n+" = "+fatt);
    }
}
