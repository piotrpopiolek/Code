import java.util.*;

/**
 * Klasa Win32RegKey umo�liwiaj�ca pobieranie i nadawanie
 * warto�ci nazwom zwi�zanym z kluczami rejestru Windows.
 * @version 1.00 1997-07-01
 * @author Cay Horstmann
 */
public class Win32RegKey
{
   public static final int HKEY_CLASSES_ROOT = 0x80000000;
   public static final int HKEY_CURRENT_USER = 0x80000001;
   public static final int HKEY_LOCAL_MACHINE = 0x80000002;
   public static final int HKEY_USERS = 0x80000003;
   public static final int HKEY_CURRENT_CONFIG = 0x80000005;
   public static final int HKEY_DYN_DATA = 0x80000006;

   private int root;
   private String path;

   /**
    * Pobiera warto�� z rejestru.
    * @param name nazwa, kt�rej warto�� pobieramy
    * @return warto�� zwi�zana z nazw�
    */
   public native Object getValue(String name);

   /**
    * Wpisuje warto�� do rejestru.
    * @param name nazwa, dla kt�rej wpisujemy warto��
    * @param value nowa warto��
    */
   public native void setValue(String name, Object value);

   /**
    * Tworzy obiekt reprezentuj�cy klucz rejestru.
    * @param theRoot jedna z warto�ci HKEY_CLASSES_ROOT,
    * HKEY_CURRENT_USER, HKEY_LOCAL_MACHINE, HKEY_USERS,
    * HKEY_CURRENT_CONFIG, HKEY_DYN_DATA
    * @param thePath �cie�ka klucza w rejestrze
    */
   public Win32RegKey(int theRoot, String thePath)
   {
      root = theRoot;
      path = thePath;
   }

   /**
    * Tworzy wyliczenie nazw umieszczonych w rejestrze
    * dla danego klucza.
    * @return wyliczenie nazw
    */
   public Enumeration<String> names()
   {
      return new Win32RegKeyNameEnumeration(root, path);
   }

   static
   {
      System.loadLibrary("Win32RegKey");
   }
}

class Win32RegKeyNameEnumeration implements Enumeration<String>
{
   public native String nextElement();
   public native boolean hasMoreElements();
   private int root;
   private String path;
   private int index = -1;
   private int hkey = 0;
   private int maxsize;
   private int count;

   Win32RegKeyNameEnumeration(int theRoot, String thePath)
   {
      root = theRoot;
      path = thePath;
   }
}

class Win32RegKeyException extends RuntimeException
{
   public Win32RegKeyException()
   {
   }

   public Win32RegKeyException(String why)
   {
      super(why);
   }
}
