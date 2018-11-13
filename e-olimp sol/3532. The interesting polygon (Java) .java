import java.util.Locale;
import java.util.Scanner;

/*
* author: Tabriz Hajiyev
*/
public class Main {

   public static void main(String args[]) {
       
       Scanner input = new Scanner(System.in);
       
       double exp = 0.0000000001;
       double n = input.nextDouble();
       double l = 0 , r = n * (n + 1) / 2.0;
       while (l <= r) {
           double mid = l + (r - l) / 2 , sum = 0.0;
           boolean check = true;
           for (int i = 1; i <= n; i++) {
           if (2 * mid <= i) {
               check = false;
               l = mid;
               break;
           }
           sum += Math.acos(1 - (i*i) / (2*mid*mid)) * 180.0 / Math.PI;
           }
           if (!check) continue;
           if (Math.abs(sum - 360.0) < exp) {
               System.out.printf(Locale.US,"%.8f\n",mid);
               break;
           }
           else if (sum > 360.0) l = mid;
           else r = mid;
       }
   }

} 