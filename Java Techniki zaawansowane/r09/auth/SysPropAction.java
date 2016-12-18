package auth;

import java.security.*;

/**
 * Akcja wyszukuj�ca w�a�ciwo�� systemow�.
 * @version 1.01 2007-10-06
 * @author Cay Horstmann   
*/
public class SysPropAction implements PrivilegedAction<String>
{
   private String propertyName;

   /**
    * Tworzy akcj� wyszukiwania podanej w�a�ciwo�ci.
    *  @param propertyName nazwa w�a�ciwo�ci (na przyk�ad "user.home")
   */
   public SysPropAction(String propertyName) { this.propertyName = propertyName; }

   public String run()
   {
      return System.getProperty(propertyName);
   }
}
