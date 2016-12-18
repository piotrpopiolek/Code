package chart2;

import java.awt.*;
import java.awt.event.*;
import java.beans.*;
import java.util.*;
import javax.swing.*;
import javax.swing.event.*;

/**
 * Klasa indywidualizacji ziarnka wykresu
 * umo�liwiaj�ca edycj� wszystkich jego w�a�ciwo�ci
 * w jednym oknie dialogowym z zak�adkami
 * @version 1.12 2007-10-03
 * @author Cay Horstmann
 */
public class ChartBeanCustomizer extends JTabbedPane implements Customizer
{
   private ChartBean bean;
   private PropertyEditor colorEditor;
   private JTextArea data;
   private JRadioButton normal;
   private JRadioButton inverse;
   private JRadioButton[] position;
   private JTextField titleField;

   public ChartBeanCustomizer()
   {
      data = new JTextArea();
      JPanel dataPane = new JPanel();
      dataPane.setLayout(new BorderLayout());
      dataPane.add(new JScrollPane(data), BorderLayout.CENTER);
      JButton dataButton = new JButton("Set data");
      dataButton.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               setData(data.getText());
            }
         });
      JPanel panel = new JPanel();
      panel.add(dataButton);
      dataPane.add(panel, BorderLayout.SOUTH);

      JPanel colorPane = new JPanel();
      colorPane.setLayout(new BorderLayout());

      normal = new JRadioButton("Normal", true);
      inverse = new JRadioButton("Inverse", false);
      panel = new JPanel();
      panel.add(normal);
      panel.add(inverse);
      ButtonGroup group = new ButtonGroup();
      group.add(normal);
      group.add(inverse);
      normal.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               setInverse(false);
            }
         });

      inverse.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               setInverse(true);
            }
         });

      colorEditor = PropertyEditorManager.findEditor(Color.class);
      colorEditor.addPropertyChangeListener(new PropertyChangeListener()
         {
            public void propertyChange(PropertyChangeEvent event)
            {
               setGraphColor((Color) colorEditor.getValue());
            }
         });

      colorPane.add(panel, BorderLayout.NORTH);
      colorPane.add(colorEditor.getCustomEditor(), BorderLayout.CENTER);

      JPanel titlePane = new JPanel();
      titlePane.setLayout(new BorderLayout());

      group = new ButtonGroup();
      position = new JRadioButton[3];
      position[0] = new JRadioButton("Left");
      position[1] = new JRadioButton("Center");
      position[2] = new JRadioButton("Right");

      panel = new JPanel();
      for (int i = 0; i < position.length; i++)
      {
         final ChartBean.Position pos = ChartBean.Position.values()[i];
         panel.add(position[i]);
         group.add(position[i]);
         position[i].addActionListener(new ActionListener()
            {
               public void actionPerformed(ActionEvent event)
               {
                  setTitlePosition(pos);
               }
            });
      }

      titleField = new JTextField();
      titleField.getDocument().addDocumentListener(new DocumentListener()
         {
            public void changedUpdate(DocumentEvent evt)
            {
               setTitle(titleField.getText());
            }

            public void insertUpdate(DocumentEvent evt)
            {
               setTitle(titleField.getText());
            }

            public void removeUpdate(DocumentEvent evt)
            {
               setTitle(titleField.getText());
            }
         });

      titlePane.add(titleField, BorderLayout.NORTH);
      JPanel panel2 = new JPanel();
      panel2.add(panel);
      titlePane.add(panel2, BorderLayout.CENTER);
      addTab("Color", colorPane);
      addTab("Title", titlePane);
      addTab("Data", dataPane);
            
   }

   /**
    * Okre�la dane prezentowane na wykresie.
    * @param s �a�cuch zawieraj�cy sekwencj� danych oddzielonych spacj�
    */
   public void setData(String s)
   {
      StringTokenizer tokenizer = new StringTokenizer(s);

      int i = 0;
      double[] values = new double[tokenizer.countTokens()];
      while (tokenizer.hasMoreTokens())
      {
         String token = tokenizer.nextToken();
         try
         {
            values[i] = Double.parseDouble(token);
            i++;
         }
         catch (NumberFormatException e)
         {
         }
      }
      setValues(values);
   }

   /**
    * Okre�la tytu� wykresu.
    * @param newValue nowy tytu�
    */
   public void setTitle(String newValue)
   {
      if (bean == null) return;
      String oldValue = bean.getTitle();
      bean.setTitle(newValue);
      firePropertyChange("title", oldValue, newValue);
   }

   /**
    * Okre�la po�o�enie tytu�u wykresu.
    * @param i po�o�enie tytu�u (ChartBean.LEFT, ChartBean.CENTER lub ChartBean.RIGHT)
    */
   public void setTitlePosition(ChartBean.Position pos)
   {
      if (bean == null) return;
      ChartBean.Position oldValue = bean.getTitlePosition();
      bean.setTitlePosition(pos);
      firePropertyChange("titlePosition", oldValue, pos);
   }

   /**
    * Okre�la warto�� w�a�ciwo�ci inverse.
    * @param b warto�� true, je�li kolory wykresu i t�a maj� by� zamienione
    */
   public void setInverse(boolean b)
   {
      if (bean == null) return;
      boolean oldValue = bean.isInverse();
      bean.setInverse(b);
      firePropertyChange("inverse", oldValue, b);
   }

   /**
    * Okre�la warto�ci prezentowane na wykresie.
    * @param newValue tablica nowych warto�ci
    */
   public void setValues(double[] newValue)
   {
      if (bean == null) return;
      double[] oldValue = bean.getValues();
      bean.setValues(newValue);
      firePropertyChange("values", oldValue, newValue);
   }

   /**
    * Okre�la kolor wykresu.
    * @param newValue nowy kolor
    */
   public void setGraphColor(Color newValue)
   {
      if (bean == null) return;
      Color oldValue = bean.getGraphColor();
      bean.setGraphColor(newValue);
      firePropertyChange("graphColor", oldValue, newValue);
   }

   public void setObject(Object obj)
   {
      bean = (ChartBean) obj;

      data.setText("");
      for (double value : bean.getValues())
         data.append(value + "\n");

      normal.setSelected(!bean.isInverse());
      inverse.setSelected(bean.isInverse());

      titleField.setText(bean.getTitle());

      for (int i = 0; i < position.length; i++)
         position[i].setSelected(i == bean.getTitlePosition().ordinal());

      colorEditor.setValue(bean.getGraphColor());
   }
}
