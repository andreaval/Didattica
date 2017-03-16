package org.vallorani.test;

import java.awt.Rectangle;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RectangularShape;
import javax.media.j3d.Geometry;

/**
 * Classe Rettangolo
 *
 * @author Andrea Vallorani
 */
public class Rettangolo {

    /**
     * Misure dei lati del rettangolo
     */
    private double l1, l2;

    /**
     * Metodo costruttore
     *
     * @param x Misura da assegnare a due lati del rettangolo
     * @param y Misura da assegnare agli altri due lati del rettangolo
     */
    public Rettangolo(double x, double y) {
        this.l1 = x;
        this.l2 = y;
    }

    /**
     * Calcolo area del rettangolo
     *
     * @return area
     */
    public double calcolaArea() {
        return this.l1 * this.l2;
    }

    /**
     * Calcolo perimetro del rettangolo
     *
     * @return perimetro
     */
    public double calcolaPerimetro() {
        return (this.l1 * 2) + (this.l2 * 2);
    }
}
