package progressMonitor;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 * Ramka zawieraj¹ca przycisk uruchamiaj¹cy
 * symulacjê czasoch³onnej operacji oraz pole tekstowe.
 */
class ProgressMonitorFrame extends JFrame
{
   public static final int TEXT_ROWS = 10;
   public static final int TEXT_COLUMNS = 40;

   private Timer cancelMonitor;
   private JButton startButton;
   private ProgressMonitor progressDialog;
   private JTextArea textArea;
   private SimulatedActivity activity;

   public ProgressMonitorFrame()
   {
      // pole tekstowe, w którym prezentowane jest dzia³anie w¹tku
      textArea = new JTextArea(TEXT_ROWS, TEXT_COLUMNS);

      // tworzy panel przycisków
      JPanel panel = new JPanel();
      startButton = new JButton("Start");
      panel.add(startButton);

      add(new JScrollPane(textArea), BorderLayout.CENTER);
      add(panel, BorderLayout.SOUTH);

      // tworzy obiekt nas³uchuj¹cy przycisku

      startButton.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               startButton.setEnabled(false);
               final int MAX = 1000;

               // uruchamia symulacjê
               activity = new SimulatedActivity(MAX);
               activity.execute();
               
               // uruchamia okno dialogowe monitora
               progressDialog = new ProgressMonitor(ProgressMonitorFrame.this,
                     "Waiting for Simulated Activity", null, 0, MAX);
               cancelMonitor.start();              
            }
         });

      // konfiguruje akcjê licznika czasu

      cancelMonitor = new Timer(500, new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {               
               if (progressDialog.isCanceled())
               {                  
                  activity.cancel(true);
                  startButton.setEnabled(true);                  
               }
               else if (activity.isDone())
               {
                  progressDialog.close();
                  startButton.setEnabled(true);                  
               }
               else
               {
                  progressDialog.setProgress(activity.getProgress());                  
               }
            }
         });
      pack();
   }

   class SimulatedActivity extends SwingWorker<Void, Integer>
   {
      private int current;
      private int target;

      /**
       * Tworzy w¹tek symulowanej operacji. Zwiêksza on wartoœæ licznika
       * do momentu osi¹gniêcia wartoœci docelowej.
       * @param t wartoœæ docelowa licznika.
       */
      public SimulatedActivity(int t)
      {
         current = 0;
         target = t;
      }

      protected Void doInBackground() throws Exception
      {
         try
         {
            while (current < target)
            {
               Thread.sleep(100);
               current++;
               textArea.append(current + "\n");               
               setProgress(current);
            }
         }
         catch (InterruptedException e)
         {
         }
         return null;
      }     
   }      
}
