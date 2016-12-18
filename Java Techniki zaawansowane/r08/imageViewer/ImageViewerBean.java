package imageViewer;

import java.awt.*;
import java.io.*;
import java.nio.file.*;
import javax.imageio.*;
import javax.swing.*;

/**
 * Ziarnko wy�wietlania plik�w graficznych.
 * @version 1.22 2012-06-10
 * @author Cay Horstmann
 */
public class ImageViewerBean extends JLabel
{
   private Path path = null;
   private static final int XPREFSIZE = 200;
   private static final int YPREFSIZE = 200;

   public ImageViewerBean()
   {
      setBorder(BorderFactory.createEtchedBorder());
   }

   /**
    * Nadaje warto�� w�a�ciwo�ci fileName.
    * @param fileName the image file name
    */
   public void setFileName(String fileName)
   {
      path = Paths.get(fileName);
      try (InputStream in = Files.newInputStream(path))
      {
         setIcon(new ImageIcon(ImageIO.read(in)));
      }
      catch (IOException e)
      {
         path = null;
         setIcon(null);
      }
   }

   /**
    * Zwraca warto�� w�a�ciwo�ci fileName.
    * @return the image file name
    */
   public String getFileName()
   {
      if (path == null) return "";
      else return path.toString();
   }

   public Dimension getPreferredSize()
   {
      return new Dimension(XPREFSIZE, YPREFSIZE);
   }
}
