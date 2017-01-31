/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vallorani.test;
import java.util.*;

/**
 *
 * @author andrea
 */
public class Finestre0 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int tot;
        System.out.print("Quante finestre vuoi visualizzare? ");
        Scanner in = new Scanner(System.in);
        tot = in.nextInt();
        for(int i=0;i<tot;i++){
            Window w = new Window();
            w.setVisible(true);
            w.setTitle("finestra "+i);
        }
    }
}
