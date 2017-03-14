package org.vallorani.test;

/**
 * Classe quadrato
 * @author Andrea Vallorani
 */
public class Quadrato {
    
    private double lato;
    
    public Quadrato(double l){
        this.lato = l;
    }
    
    public double calcolaArea(){
        return this.lato*this.lato;
    }
    
    public double calcolaPerimetro(){
        return this.lato*4;
    }
}
