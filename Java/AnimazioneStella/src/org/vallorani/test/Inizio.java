package org.vallorani.test;

import java.awt.EventQueue;
import javax.swing.JFrame;

public class Inizio extends JFrame {

    public Inizio() {

        initUI();
    }
    
    private void initUI() {
        
        add(new Board2());

        setResizable(false);
        pack();
        
        setTitle("Star");    
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);        
    }

    public static void main(String[] args) {
        
        EventQueue.invokeLater(new Runnable() {
            
            @Override
            public void run() {                
                JFrame ex = new Inizio();
                ex.setVisible(true);                
            }
        });
    }
}