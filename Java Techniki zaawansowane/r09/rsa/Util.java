package rsa;

import java.io.*;
import java.security.*;
import javax.crypto.*;

public class Util
{
   /**
    * Szyfruje bajty strumienia wej�ciowego i wysy�a je do strumienia wyj�ciowego.
    * @param in strumie� wej�ciowy
    * @param out the strumie� wyj�ciowy
    * @param cipher algorytm szyfrowania
    */
   public static void crypt(InputStream in, OutputStream out, Cipher cipher) throws IOException,
         GeneralSecurityException
   {
      int blockSize = cipher.getBlockSize();
      int outputSize = cipher.getOutputSize(blockSize);
      byte[] inBytes = new byte[blockSize];
      byte[] outBytes = new byte[outputSize];

      int inLength = 0;
      ;
      boolean more = true;
      while (more)
      {
         inLength = in.read(inBytes);
         if (inLength == blockSize)
         {
            int outLength = cipher.update(inBytes, 0, blockSize, outBytes);
            out.write(outBytes, 0, outLength);
         }
         else more = false;
      }
      if (inLength > 0) outBytes = cipher.doFinal(inBytes, 0, inLength);
      else outBytes = cipher.doFinal();
      out.write(outBytes);
   }
}
