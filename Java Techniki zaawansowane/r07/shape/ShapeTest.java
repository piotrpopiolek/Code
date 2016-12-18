package shape;

import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.util.*;
import javax.swing.*;

/**
 * Program demonstruj�cy tworzenie figur za pomoc� Java 2D.
 * @version 1.02 2007-08-16
 * @author Cay Horstmann
 */
public class ShapeTest
{
   public static void main(String[] args)
   {
      EventQueue.invokeLater(new Runnable()
         {
            public void run()
            {
               JFrame frame = new ShapeTestFrame();
               frame.setTitle("ShapeTest");
               frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
               frame.setVisible(true);
            }
         });
   }
}

/**
 * Ramka zawieraj�ca list� rozwijaln� wyboru figury
 * oraz panel, na kt�rym rysowana jest jej reprezentacja.
 */
class ShapeTestFrame extends JFrame
{
   public ShapeTestFrame()
   {
      final ShapeComponent comp = new ShapeComponent();
      add(comp, BorderLayout.CENTER);
      final JComboBox<ShapeMaker> comboBox = new JComboBox<>();
      comboBox.addItem(new LineMaker());
      comboBox.addItem(new RectangleMaker());
      comboBox.addItem(new RoundRectangleMaker());
      comboBox.addItem(new EllipseMaker());
      comboBox.addItem(new ArcMaker());
      comboBox.addItem(new PolygonMaker());
      comboBox.addItem(new QuadCurveMaker());
      comboBox.addItem(new CubicCurveMaker());
      comboBox.addActionListener(new ActionListener()
         {
            public void actionPerformed(ActionEvent event)
            {
               ShapeMaker shapeMaker = comboBox.getItemAt(comboBox.getSelectedIndex());
               comp.setShapeMaker(shapeMaker);
            }
         });
      add(comboBox, BorderLayout.NORTH);
      comp.setShapeMaker((ShapeMaker) comboBox.getItemAt(0));
      pack();
   }

}

/**
 * Komponent rysuj�cy figur�
 * i umo�liwiaj�cy przesuwanie definiuj�cych j� punkt�w.
 */
class ShapeComponent extends JComponent
{
   private static final int DEFAULT_WIDTH = 300;
   private static final int DEFAULT_HEIGHT = 200;

   private Point2D[] points;
   private static Random generator = new Random();
   private static int SIZE = 10;
   private int current;
   private ShapeMaker shapeMaker;

   public ShapeComponent()
   {
      addMouseListener(new MouseAdapter()
         {
            public void mousePressed(MouseEvent event)
            {
               Point p = event.getPoint();
               for (int i = 0; i < points.length; i++)
               {
                  double x = points[i].getX() - SIZE / 2;
                  double y = points[i].getY() - SIZE / 2;
                  Rectangle2D r = new Rectangle2D.Double(x, y, SIZE, SIZE);
                  if (r.contains(p))
                  {
                     current = i;
                     return;
                  }
               }
            }

            public void mouseReleased(MouseEvent event)
            {
               current = -1;
            }
         });
      addMouseMotionListener(new MouseMotionAdapter()
         {
            public void mouseDragged(MouseEvent event)
            {
               if (current == -1) return;
               points[current] = event.getPoint();
               repaint();
            }
         });
      current = -1;
   }

   /**
    * Inicjuje obiekt ShapeMaker losowo wybranym zbiorem punkt�w kontrolnych.
    * @param aShapeMaker obiekt klasy ShapeMaker definiuj�cy figur�
    * za pomoc� zbioru punkt�w kontrolnych.
    */
   public void setShapeMaker(ShapeMaker aShapeMaker)
   {
      shapeMaker = aShapeMaker;
      int n = shapeMaker.getPointCount();
      points = new Point2D[n];
      for (int i = 0; i < n; i++)
      {
         double x = generator.nextDouble() * getWidth();
         double y = generator.nextDouble() * getHeight();
         points[i] = new Point2D.Double(x, y);
      }
      repaint();
   }

   public void paintComponent(Graphics g)
   {
      if (points == null) return;
      Graphics2D g2 = (Graphics2D) g;
      for (int i = 0; i < points.length; i++)
      {
         double x = points[i].getX() - SIZE / 2;
         double y = points[i].getY() - SIZE / 2;
         g2.fill(new Rectangle2D.Double(x, y, SIZE, SIZE));
      }

      g2.draw(shapeMaker.makeShape(points));
   }
   
   public Dimension getPreferredSize() { return new Dimension(DEFAULT_WIDTH, DEFAULT_HEIGHT); }
}

/**
 * Klasa abstrakcyjna reprezentuj�ca figur�
 * za pomoc� zbioru punkt�w kontrolnych.
 * Jej konkretne klasy pochodne musz� implementowa�
 * metod� makeShape zwracaj�c� dany rodzaj figury.
 */
abstract class ShapeMaker
{
   public abstract Shape makeShape(Point2D[] p);
   private int pointCount;

   /**
    * Tworzy obiekt klasy ShapeMaker.
    * @param aPointCount liczba punkt�w kontrolnych definiuj�cych figur�.
    */
   public ShapeMaker(int aPointCount)
   {
      pointCount = aPointCount;
   }

   /**
    * Zwraca liczb� punkt�w kontrolnych definiuj�cych figur�.
    * @return liczba punkt�w kontrolnych
    */
   public int getPointCount()
   {
      return pointCount;
   }

   /**
    * Tworzy figur� na podstawie zbioru punkt�w.
    * @param p punkty definiuj�ce figur�
    * @return zdefiniowana figura
    */

   public String toString()
   {
      return getClass().getName();
   }

}

/**
 * Tworzy odcinek linii prostej ��cz�cy dwa punkty.
 */
class LineMaker extends ShapeMaker
{
   public LineMaker()
   {
      super(2);
   }

   public Shape makeShape(Point2D[] p)
   {
      return new Line2D.Double(p[0], p[1]);
   }
}

/**
 * Tworzy prostok�t rozpi�ty za pomoc� dwu naro�nik�w.
 */
class RectangleMaker extends ShapeMaker
{
   public RectangleMaker()
   {
      super(2);
   }

   public Shape makeShape(Point2D[] p)
   {
      Rectangle2D s = new Rectangle2D.Double();
      s.setFrameFromDiagonal(p[0], p[1]);
      return s;
   }
}

/**
 * Tworzy zaokr�glony prostok�t rozpi�ty za pomoc� dwu naro�nik�w.
 */
class RoundRectangleMaker extends ShapeMaker
{
   public RoundRectangleMaker()
   {
      super(2);
   }

   public Shape makeShape(Point2D[] p)
   {
      RoundRectangle2D s = new RoundRectangle2D.Double(0, 0, 0, 0, 20, 20);
      s.setFrameFromDiagonal(p[0], p[1]);
      return s;
   }
}

/**
 * Tworzy elips� zawart� w prostok�cie ograniczaj�cym
 * rozpi�tym za pomoc� dwu naro�nik�w.
 */
class EllipseMaker extends ShapeMaker
{
   public EllipseMaker()
   {
      super(2);
   }

   public Shape makeShape(Point2D[] p)
   {
      Ellipse2D s = new Ellipse2D.Double();
      s.setFrameFromDiagonal(p[0], p[1]);
      return s;
   }
}

/**
 * Tworzy �uk zawarty w prostok�cie ograniczaj�cym
 * rozpi�tym za pomoc� dwu naro�nik�w. Dodatkowe dwa punkty
 * kontrolne umo�liwiaj� okre�lenie warto�ci pocz�tkowej i ko�cowej
 * k�ta �uku. Aby zilustrowa� poprawno�� oblicze� k�t�w �uku, metoda makeShape
 * zwraca figur� z�o�on� z �uku, prostok�ta ograniczaj�cego i linii
 * ��cz�cych �rodek �uku z punktami kontrolnymi k�ta.
 */
class ArcMaker extends ShapeMaker
{
   public ArcMaker()
   {
      super(4);
   }

   public Shape makeShape(Point2D[] p)
   {
      double centerX = (p[0].getX() + p[1].getX()) / 2;
      double centerY = (p[0].getY() + p[1].getY()) / 2;
      double width = Math.abs(p[1].getX() - p[0].getX());
      double height = Math.abs(p[1].getY() - p[0].getY());

      double skewedStartAngle = Math.toDegrees(Math.atan2(-(p[2].getY() - centerY) * width, (p[2]
            .getX() - centerX)
            * height));
      double skewedEndAngle = Math.toDegrees(Math.atan2(-(p[3].getY() - centerY) * width, (p[3]
            .getX() - centerX)
            * height));
      double skewedAngleDifference = skewedEndAngle - skewedStartAngle;
      if (skewedStartAngle < 0) skewedStartAngle += 360;
      if (skewedAngleDifference < 0) skewedAngleDifference += 360;

      Arc2D s = new Arc2D.Double(0, 0, 0, 0, skewedStartAngle, skewedAngleDifference, Arc2D.OPEN);
      s.setFrameFromDiagonal(p[0], p[1]);

      GeneralPath g = new GeneralPath();
      g.append(s, false);
      Rectangle2D r = new Rectangle2D.Double();
      r.setFrameFromDiagonal(p[0], p[1]);
      g.append(r, false);
      Point2D center = new Point2D.Double(centerX, centerY);
      g.append(new Line2D.Double(center, p[2]), false);
      g.append(new Line2D.Double(center, p[3]), false);
      return g;
   }
}

/**
 * Tworzy wielok�t o sze�ciu wierzcho�kach.
 */
class PolygonMaker extends ShapeMaker
{
   public PolygonMaker()
   {
      super(6);
   }

   public Shape makeShape(Point2D[] p)
   {
      GeneralPath s = new GeneralPath();
      s.moveTo((float) p[0].getX(), (float) p[0].getY());
      for (int i = 1; i < p.length; i++)
         s.lineTo((float) p[i].getX(), (float) p[i].getY());
      s.closePath();
      return s;
   }
}

/**
 * Tworzy krzyw� drugiego stopnia zdefiniowan� przez jej ko�ce
 * i pojedynczy punkt kontrolny.
 */
class QuadCurveMaker extends ShapeMaker
{
   public QuadCurveMaker()
   {
      super(3);
   }

   public Shape makeShape(Point2D[] p)
   {
      return new QuadCurve2D.Double(p[0].getX(), p[0].getY(), p[1].getX(), p[1].getY(), p[2]
            .getX(), p[2].getY());
   }
}

/**
 * Tworzy krzyw� trzeciego stopnia zdefiniowan� przez jej ko�ce
 * i dwa punkty kontrolne.
 */
class CubicCurveMaker extends ShapeMaker
{
   public CubicCurveMaker()
   {
      super(4);
   }

   public Shape makeShape(Point2D[] p)
   {
      return new CubicCurve2D.Double(p[0].getX(), p[0].getY(), p[1].getX(), p[1].getY(), p[2]
            .getX(), p[2].getY(), p[3].getX(), p[3].getY());
   }
}
