import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
*
* @author Student
*/
public class Main {

   /**
    * @param args the command line arguments
    */
   private Long n, m;
   private boolean used[];
   private LinkedList<Integer> list[];
   private LinkedList<Integer> q;
   private long MOD = 100000000;
   private long[][] tempMas = {{1, 1}, {1, 0}};
   public static void main(String[] args) {

       InputStream inputStream = System.in;

       InputReader in = new InputReader(inputStream);

       new Main().run(in);
   }

   private void run(InputReader in) {

       while (in.hasNextLong()) {

           n = in.nextLong();
           m = in.nextLong();


           long[][] mas = {{1, 1}, {1, 0}};
           long[][] tempMas = matris(gcd(n,m),mas);

           
           
           System.out.println(tempMas[0][1]);


       }
   }

   private long gcd(long a, long b) {

       return b == 0 ? a : gcd(b, a % b);

   }

   private long[][] matris(long n, long[][] mas) {
       long[][] tempMas1 = {{1, 1}, {1, 0}};
       
       if(n==1) return mas;
       if (n % 2 == 0) {
           tempMas1 = matris(n/2,mas);
           
     
           return matrixMul(tempMas1, tempMas1);
           
       }else{
            long[][] tempMas2 = {{1, 1}, {1, 0}};
             for (int j = 0; j < 2; j++) {
               for (int l = 0; l < 2; l++) {
                   //     System.out.print(tempMas[j][l]+" ");
                   tempMas2[j][l] = mas[j][l];
               }
               //     System.out.print("\n");
           }
           return matrixMul( tempMas2,matris(n-1,mas));
       }


   }

   private long[][] matrixMul(long[][] mas, long[][] tempMas) {



       long[][] tempMas1 = {{1, 1}, {1, 0}};
     
           tempMas1[0][0] = (((mas[0][0] % MOD) * (tempMas[0][0] % MOD)) % MOD + ((mas[0][1] % MOD) * (tempMas[1][0] % MOD)) % MOD) % MOD;
           tempMas1[0][1] = (((mas[0][0] % MOD) * (tempMas[0][1] % MOD)) % MOD + ((mas[0][1] % MOD) * (tempMas[1][1] % MOD)) % MOD) % MOD;
           tempMas1[1][0] = (((mas[1][0] % MOD) * (tempMas[0][0] % MOD)) % MOD + ((mas[1][1] % MOD) * (tempMas[1][0] % MOD)) % MOD) % MOD;
           tempMas1[1][1] = (((mas[1][0] % MOD) * (tempMas[0][1] % MOD)) % MOD + ((mas[1][1] % MOD) * (tempMas[1][1] % MOD)) % MOD) % MOD;

           for (int j = 0; j < 2; j++) {
               for (int l = 0; l < 2; l++) {
                   //     System.out.print(tempMas[j][l]+" ");
                   tempMas[j][l] = tempMas1[j][l];
               }
               //     System.out.print("\n");
           }
           
           
           
               

       

       return tempMas;
   }
}

class InputReader {

   public BufferedReader reader;
   public StringTokenizer tokenizer;
   private String str = null;

   public InputReader(InputStream stream) {
       reader = new BufferedReader(new InputStreamReader(stream));
       tokenizer = null;
   }

   public boolean hasNextLong() {
       try {
           return (str = reader.readLine()) != null;
       } catch (IOException ex) {
           Logger.getLogger(InputReader.class.getName()).log(Level.SEVERE, null, ex);
       }
       return false;
   }

   public String next() {
       while (tokenizer == null || !tokenizer.hasMoreTokens()) {

           tokenizer = new StringTokenizer(str);

       }
       return tokenizer.nextToken();
   }

   public long nextLong() {
       return Long.parseLong(next());
   }
} 