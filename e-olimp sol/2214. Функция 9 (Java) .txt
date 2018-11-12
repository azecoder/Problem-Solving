import java.util.Scanner;



public class Main {

   private static long n, m, c;

   /**
    * @author Tabriz
    */

   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       n = in.nextLong();
       m = in.nextLong();
       while(m != 0){
           n %= m;
           c = n; n = m; m = c;
       }
       System.out.println(n);
   }
} 