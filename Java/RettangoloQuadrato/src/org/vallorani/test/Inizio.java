package org.vallorani.test;

/**
 * Programma che calcola area e perimetro di quadrati e rettangoli
 *
 * @author Andrea Vallorani
 */
public class Inizio extends javax.swing.JFrame {

    /**
     * Creates new form Inizio
     */
    public Inizio() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        bRettangolo = new javax.swing.JButton();
        bQuadrato = new javax.swing.JButton();
        jLabel3 = new javax.swing.JLabel();

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

        jLabel3.setIcon(new javax.swing.ImageIcon(getClass().getResource("/org/vallorani/test/logo.png"))); // NOI18N

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(102, 102, 102)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel3)
                    .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 229, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(0, 78, Short.MAX_VALUE)
                .addComponent(bRettangolo, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(bQuadrato, javax.swing.GroupLayout.PREFERRED_SIZE, 123, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(72, 72, 72))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel2)
                .addGap(147, 147, 147))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 65, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel3)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 27, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(bRettangolo, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(bQuadrato, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(52, 52, 52)
                .addComponent(jLabel2)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void bRettangoloActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bRettangoloActionPerformed
        //istanzio un oggetto per creare la finestra del rettangolo
        WinRettangolo f = new WinRettangolo();
        //rendo visibile la finestra
        f.setVisible(true);
    }//GEN-LAST:event_bRettangoloActionPerformed

    private void bQuadratoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bQuadratoActionPerformed
        //istanzio un oggetto per creare la finestra del quadrato
        WinQuadrato f = new WinQuadrato();
        //rendo visibile la finestra
        f.setVisible(true);
    }//GEN-LAST:event_bQuadratoActionPerformed

    /**
     * Metodo di avvio del programma
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
    private javax.swing.JLabel jLabel3;
    // End of variables declaration//GEN-END:variables
}
