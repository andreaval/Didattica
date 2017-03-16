package org.vallorani.test;

/**
 * Classe Quadrato
 *
 * @author Andrea Vallorani
 */
public class Quadrato extends Rettangolo {

    /**
     * Metodo costruttore
     *
     * @param l Misura del lato
     */
    public Quadrato(double l) {
        //invoco il costruttore della classe padre il quale richiede 2 parametri
        super(l, l);
    }
}
