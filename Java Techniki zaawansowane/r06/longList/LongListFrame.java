package longList;

import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;

/**
 * Ramka zawieraj�ca d�ug� list� s��w i etykiet� pokazuj�c� zdanie
 *  z�o�one z wybranych s��w.
 */
public class LongListFrame extends JFrame
{
   private JList<String> wordList;
   private JLabel label;
   private String prefix = "The quick brown ";
   private String suffix = " jumps over the lazy dog.";

   public LongListFrame()
   {
      wordList = new JList<String>(new WordListModel(3));
      wordList.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
      wordList.setPrototypeCellValue("www");
      JScrollPane scrollPane = new JScrollPane(wordList);

      JPanel p = new JPanel();
      p.add(scrollPane);
      wordList.addListSelectionListener(new ListSelectionListener()
         {
            public void valueChanged(ListSelectionEvent evt)
            {
               setSubject(wordList.getSelectedValue());
            }
         });

      Container contentPane = getContentPane();
      contentPane.add(p, BorderLayout.NORTH);
      label = new JLabel(prefix + suffix);
      contentPane.add(label, BorderLayout.CENTER);
      setSubject("fox");
      pack();
   }

   /**
    * Okre�la podmiot zdania pokazywanego za pomoc� etykiety.
    * @param word nowy podmiot zdania
    */
   public void setSubject(String word)
   {
      StringBuilder text = new StringBuilder(prefix);
      text.append(word);
      text.append(suffix);
      label.setText(text.toString());
   }
}
