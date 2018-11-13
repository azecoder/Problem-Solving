import java.util.*;

public class Main {
 
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       input.useLocale(new Locale("US"));
       
       double x = input.nextDouble();
       double v = input.nextDouble();
       
       double angle = Math.atan2(v, x);
       if(angle < 0)
           angle += (2 * Math.PI);
       System.out.printf(Locale.US,"%.6f\n",angle);
  }    
}