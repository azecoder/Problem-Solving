import java.util.*;

public class Main {
   
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       input.useLocale(new Locale("US"));
       int n = input.nextInt();
 
       percent(n);
   }

   private static void percent(int n) {
       double x = 1;
       double sum = 0;
       int i = 1;
       while(i <= n){
           sum += (x / 2);
           x /= 4;
           i++;
       }
       double percent  = sum * 100;
       System.out.printf(Locale.US,"%.5f\n",percent);
   }
}