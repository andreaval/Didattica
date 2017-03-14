package org.vallorani.test;

/**
 * Programma che calcola area e perimetro di quadrati e rettangoli
 * @author Andrea Vallorani
 */
public class Inizio extends javax.swing.JFrame {

    /**
     * Creates new form Inizio
     */
    public Inizio() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        bRettangolo = new javax.swing.JButton();
        bQuadrato = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setFont(new java.awt.Font("Lucida Grande", 0, 24)); // NOI18N
        jLabel1.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel1.setText("Figure geometriche");

        jLabel2.setText("v. 1.0 - By Andrea");

        bRettangolo.setFont(new java.awt.Font("Lucida Grande", 1, 14)); // NOI18N
        bRettangolo.setText("RETTANGOLO");
        bRettangolo.setSize(new java.awt.Dimension(97, 35));
        bRettangolo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bRettangoloActionPerformed(evt);
            }
        });

        bQuadrato.setFont(new java.awt.Font("Lucida Grande", 1, 14)); // NOI18N
        bQuadrato.setText("QUADRATO");
        bQuadrato.setSize(new java.awt.Dimension(97, 35));
        bQuadrato.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bQuadratoActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(61, 61, 61)
                        .addComponent(bRettangolo, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(bQuadrato, javax.swing.GroupLayout.PREFERRED_SIZE, 123, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 229, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(69, Short.MAX_VALUE))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(0, 0, Short.MAX_VALUE)
                .addComponent(jLabel2)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(48, 48, 48)
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 65, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(43, 43, 43)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(bRettangolo, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(bQuadrato, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 66, Short.MAX_VALUE)
                .addComponent(jLabel2)
                .addGap(24, 24, 24))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void bRettangoloActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bRettangoloActionPerformed
        WinRettangolo f = new WinRettangolo();
        f.setVisible(true);
    }//GEN-LAST:event_bRettangoloActionPerformed

    private void bQuadratoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bQuadratoActionPerformed
        WinQuadrato f = new WinQuadrato();
        f.setVisible(true);
    }//GEN-LAST:event_bQuadratoActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        //istanzio l'oggetto Inizio
        Inizio f = new Inizio();
        //centro la finestra nello schermo
        f.setLocationRelativeTo(null);
        //la rendo visibile
        f.setVisible(true);
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton bQuadrato;
    private javax.swing.JButton bRettangolo;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    // End of variables declaration//GEN-END:variables
}