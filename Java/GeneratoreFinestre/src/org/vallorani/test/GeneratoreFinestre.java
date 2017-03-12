/*
 * Programma che genera N finestre in base all'input fornito dall'utente
 * tramite console.
 */
package org.vallorani.test;
import java.util.*;

/**
 * Classe principale
 * @author Andrea Vallorani
 */
public class GeneratoreFinestre {

    /**
     * Metodo iniziale del programma
     */
    public static void main(String[] args) {
        int tot;
        System.out.print("Quante finestre vuoi visualizzare? ");
        Scanner in = new Scanner(System.in);
        tot = in.nextInt();
        int left = 100;
        int top = 100;
        for(int i=1;i<=tot;i++){
            Window w = new Window();
            w.setLocation(left, top);
            w.setTitle("Finestra "+i);
            w.testo.setText("posizione x: "+(w.getLocation().x)+", y:"+(w.getLocation().y)+"");
            w.setVisible(true);
            left += 30;
            top += 30;
        }
    }
}