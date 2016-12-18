package runtimeAnnotations;

import java.awt.event.*;
import java.lang.reflect.*;

/**
 * @version 1.00 2004-08-17
 * @author Cay Horstmann
 */
public class ActionListenerInstaller
{
   /**
    * Przetwarza wszystkie adnotacje ActionListenerFor danego obiektu.
    * @param obj obiekt, kt�rego metody mog� posiada� adnotacje ActionListenerFor
    */
   public static void processAnnotations(Object obj)
   {
      try
      {
         Class<?> cl = obj.getClass();
         for (Method m : cl.getDeclaredMethods())
         {
            ActionListenerFor a = m.getAnnotation(ActionListenerFor.class);
            if (a != null)
            {
               Field f = cl.getDeclaredField(a.source());
               f.setAccessible(true);
               addListener(f.get(obj), obj, m);
            }
         }
      }
      catch (ReflectiveOperationException e)
      {
         e.printStackTrace();
      }
   }

   /**
    * Dodaje obiekt nas�uchuj�cy wywo�uj�cy dan� metod�.
    * @param source �r�d�o zdarze�, dla kt�rego instalowany jest obiekt nas�uchuj�cy
    * @param param niejawny parametr metody wywo�ywanej przez obiekt nas�uchuj�cy
    * @param m metoda wywo�ywana przez obiekt nas�uchuj�cy
    */
   public static void addListener(Object source, final Object param, final Method m)
         throws ReflectiveOperationException
   {
      InvocationHandler handler = new InvocationHandler()
         {
            public Object invoke(Object proxy, Method mm, Object[] args) throws Throwable
            {
               return m.invoke(param);
            }
         };

      Object listener = Proxy.newProxyInstance(null,
            new Class[] { java.awt.event.ActionListener.class }, handler);
      Method adder = source.getClass().getMethod("addActionListener", ActionListener.class);
      adder.invoke(source, listener);
   }
}
