package server;

import java.io.*;
import java.net.*;
import java.util.*;

/**
 * Program implementuj�cy prosty serwer
 * nas�uchuj�cy na porcie 8189
 * i wysy�aj�cy echo informacji otrzymanej od klienta.
 * @version 1.21 2012-05-19
 * @author Cay Horstmann
 */
public class EchoServer
{
   public static void main(String[] args) throws IOException
   {
      // tworzy gniazdo serwera
      try (ServerSocket s = new ServerSocket(8189))
      {
         // oczekuje na po��czenie z klientem
         try (Socket incoming = s.accept())
         {
            InputStream inStream = incoming.getInputStream();
            OutputStream outStream = incoming.getOutputStream();
   
            try (Scanner in = new Scanner(inStream))
            {
               PrintWriter out = new PrintWriter(outStream, true /* autoFlush */);
      
               out.println("Hello! Enter BYE to exit.");
      
               // wysy�a echo informacji otrzymanej od klienta
               boolean done = false;
               while (!done && in.hasNextLine())
               {
                  String line = in.nextLine();
                  out.println("Echo: " + line);
                  if (line.trim().equals("BYE")) done = true;
               }
            }
         }
      }
   }
}