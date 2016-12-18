package jaas;

import java.security.*;
import java.util.*;

/**
 * Nadzorca (na przyk�ad "role=HR" lub "username=harry").
 */
public class SimplePrincipal implements Principal
{
   private String descr;
   private String value;

   /**
    * Tworzy obiekt SimplePrincipal przechowuj�cy opis i warto��.
    * @param roleName nazwa roli
    */
   public SimplePrincipal(String descr, String value)
   {
      this.descr = descr;
      this.value = value;
   }

   /**
    * Zwraca nazw� roli nadzorcy
    * @return nazwa roli
    */
   public String getName()
   {
      return descr + "=" + value;
   }

   public boolean equals(Object otherObject)
   {
      if (this == otherObject) return true;
      if (otherObject == null) return false;
      if (getClass() != otherObject.getClass()) return false;
      SimplePrincipal other = (SimplePrincipal) otherObject;
      return Objects.equals(getName(), other.getName());
   }

   public int hashCode()
   {
      return Objects.hashCode(getName());
   }
}
