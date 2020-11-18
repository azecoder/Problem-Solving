import java.util.Scanner;

/**
*
* @author Tebriz
*/
public class Main {

   private static long n, x = 1, cnt = 0;

   public static void main(String[] args) {

       Scanner in = new Scanner(System.in);
       n = in.nextLong();
       for (int i = 1; i <= 100; i++) {
           if (x >= n) {
               System.out.println(cnt);
               System.exit(0);
           }
           x *= 2;
           cnt ++;
       }
   }

} 