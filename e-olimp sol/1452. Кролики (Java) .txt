import java.util.Scanner;

/**
*
* @author Tebriz
*/
public class Main {

   private static int[] a = new int[101];

   public static void main(String[] args) {

       Scanner in = new Scanner(System.in);
       int n = in.nextInt();
       int k = in.nextInt();

       a[0] = 1;
       for (int i = 0; i <= n; i++) {
           if (i != 0) {
               a[i] = a[i - 1] * 2;
           }
           if (a[i] > k && i != n) {
               a[i] -= k;
           }
       }
       System.out.println(a[n]);
   }

} 