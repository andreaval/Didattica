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
public class Finestre1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int tot;
        Scanner in = new Scanner(System.in);
        tot=in.nextInt();
        int left=10;
        int top=0;
        for(int i=1;i<=tot;i++){
            Window w = new Window();
            w.setVisible(true);
            w.setLocation(left, top);
            w.testo.setText("finestra "+i+" ("+(w.getLocation().x)+"x"+(w.getLocation().y)+")");
            if(i%4==0){
                left=10;
                top+=240;
            }
            else left+=260;
        }
    }
    
}