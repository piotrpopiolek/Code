package jaas;

import java.security.*;

/**
 * Wyszukuje w�a�ciwo�� systemow�.
 */
public class SysPropAction implements PrivilegedAction<String>
{
   private String propertyName;

   /**
    * Konstruktor.
    * @param propertyName nazwa w�a�ciwo�ci (na przyk�ad "user.home")
    */
   public SysPropAction(String propertyName)
   {
      this.propertyName = propertyName;
   }

   public String run()
   {
      return System.getProperty(propertyName);
   }
}
