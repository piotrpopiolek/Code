/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eurobiznes;

/**
 *
 * @author Lenovo
 */
public class ActOfOwnershipCity extends ActOfOwnership
{

    /**
     * Creates new form ActOfOwnershipCity
     */
    public ActOfOwnershipCity() 
    {
        initComponents();
    }
    public ActOfOwnershipCity(String number, String title, String state, String city,String PriceBuyText,String PriceBuy,String Info,String Info0,String Price0,String Info1,String Price1,String Info2,String Price2,String Info3,String Price3,String Info4,String Price4,String Info5,String Price5,String InfoDown,String InfoHouse,String PriceHouse,String InfoHotel,String PriceHotel,String MortgageText,String MortgagePrice)
    {
        super(number,title,state,city);
        initComponents();
        this.PriceBuy.setText(PriceBuy);
        this.PriceBuyText.setText(PriceBuyText);
        this.Info.setText(Info);
        this.Info0.setText(Info0);
        this.Price0.setText(Price0);
        this.Info1.setText(Info1);
        this.Price1.setText(Price1);
        this.Info2.setText(Info2);
        this.Price2.setText(Price2);
        this.Info3.setText(Info3);
        this.Price3.setText(Price3);
        this.Info4.setText(Info4);
        this.Price4.setText(Price4);
        this.Info5.setText(Info5);
        this.Price5.setText(Price5);
        this.InfoDown.setText(InfoDown);
        this.InfoHouse.setText(InfoHouse);
        this.PriceHouse.setText(PriceHouse);
        this.InfoHotel.setText(InfoHotel);
        this.PriceHotel.setText(PriceHotel);
        this.MortgageText.setText(MortgageText);
        this.MortgagePrice.setText(MortgagePrice);
    }
    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        Info5 = new javax.swing.JLabel();
        Price5 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        InfoDown = new javax.swing.JTextArea();
        InfoHouse = new javax.swing.JLabel();
        PriceHouse = new javax.swing.JLabel();
        InfoHotel = new javax.swing.JLabel();
        PriceHotel = new javax.swing.JLabel();
        MortgageText = new javax.swing.JLabel();
        MortgagePrice = new javax.swing.JLabel();
        Info4 = new javax.swing.JLabel();
        Price4 = new javax.swing.JLabel();
        Info3 = new javax.swing.JLabel();
        Price3 = new javax.swing.JLabel();
        Info2 = new javax.swing.JLabel();
        Price2 = new javax.swing.JLabel();
        Info1 = new javax.swing.JLabel();
        Price1 = new javax.swing.JLabel();
        Info0 = new javax.swing.JLabel();
        Price0 = new javax.swing.JLabel();
        Info = new javax.swing.JLabel();
        PriceBuyText = new javax.swing.JLabel();
        PriceBuy = new javax.swing.JLabel();

        Info5.setText("jLabel1");

        Price5.setText("jLabel2");

        InfoDown.setEditable(false);
        InfoDown.setColumns(20);
        InfoDown.setRows(5);
        jScrollPane1.setViewportView(InfoDown);

        InfoHouse.setText("jLabel3");

        PriceHouse.setText("jLabel4");

        InfoHotel.setText("jLabel5");

        PriceHotel.setText("jLabel6");

        MortgageText.setText("jLabel7");

        MortgagePrice.setText("jLabel8");

        Info4.setText("jLabel1");

        Price4.setText("jLabel2");

        Info3.setText("jLabel1");

        Price3.setText("jLabel2");

        Info2.setText("jLabel1");

        Price2.setText("jLabel2");

        Info1.setText("jLabel1");

        Price1.setText("jLabel2");

        Info0.setText("jLabel1");

        Price0.setText("jLabel2");

        Info.setText("jLabel1");

        PriceBuyText.setText("jLabel1");

        PriceBuy.setText("jLabel1");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info5)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 208, Short.MAX_VALUE)
                        .addComponent(Price5))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(InfoHouse)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(PriceHouse))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(InfoHotel)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(PriceHotel))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(MortgageText)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(MortgagePrice))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(Price4))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info3)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(Price3))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info2)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(Price2))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(Price1))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info0)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(Price0))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(PriceBuyText)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(PriceBuy))
                    .addComponent(jScrollPane1))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(117, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(PriceBuyText)
                    .addComponent(PriceBuy))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(Info)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Info0, javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(Price0, javax.swing.GroupLayout.Alignment.TRAILING))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Info1, javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(Price1, javax.swing.GroupLayout.Alignment.TRAILING))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Info2, javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(Price2, javax.swing.GroupLayout.Alignment.TRAILING))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Info3, javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(Price3, javax.swing.GroupLayout.Alignment.TRAILING))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Price4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Price5))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Info4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Info5)))
                .addGap(18, 18, 18)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(7, 7, 7)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(InfoHouse)
                    .addComponent(PriceHouse))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(InfoHotel)
                    .addComponent(PriceHotel))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(MortgageText)
                    .addComponent(MortgagePrice))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(ActOfOwnershipCity.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(ActOfOwnershipCity.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(ActOfOwnershipCity.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(ActOfOwnershipCity.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new ActOfOwnershipCity().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel Info;
    private javax.swing.JLabel Info0;
    private javax.swing.JLabel Info1;
    private javax.swing.JLabel Info2;
    private javax.swing.JLabel Info3;
    private javax.swing.JLabel Info4;
    private javax.swing.JLabel Info5;
    private javax.swing.JTextArea InfoDown;
    private javax.swing.JLabel InfoHotel;
    private javax.swing.JLabel InfoHouse;
    private javax.swing.JLabel MortgagePrice;
    private javax.swing.JLabel MortgageText;
    private javax.swing.JLabel Price0;
    private javax.swing.JLabel Price1;
    private javax.swing.JLabel Price2;
    private javax.swing.JLabel Price3;
    private javax.swing.JLabel Price4;
    private javax.swing.JLabel Price5;
    private javax.swing.JLabel PriceBuy;
    private javax.swing.JLabel PriceBuyText;
    private javax.swing.JLabel PriceHotel;
    private javax.swing.JLabel PriceHouse;
    private javax.swing.JScrollPane jScrollPane1;
    // End of variables declaration//GEN-END:variables
}
