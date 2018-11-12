import java.util.*;

public class Main {
   
   private static final double PI = 3.141592653589793;
 
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       input.useLocale(new Locale("US"));
       
       while(input.hasNextDouble()){
           double x1 = input.nextDouble();       double v1 = input.nextDouble();
           double x2 = input.nextDouble();       double v2 = input.nextDouble();
           double x3 = input.nextDouble();       double v3 = input.nextDouble();
           
           double l1 = Math.sqrt((x1 - x2) * (x1 - x2) + (v1 - v2) * (v1 - v2));
           double l2 = Math.sqrt((x2 - x3) * (x2 - x3) + (v2 - v3) * (v2 - v3));
           double l3 = Math.sqrt((x3 - x1) * (x3 - x1) + (v3 - v1) * (v3 - v1));
           
           double a = l1 * l2 * l3;
           double c = Math.sqrt((l1 + l2 + l3) * (l2 + l3 - l1) * (l3 + l1 - l2) * (l1 + l2 - l3));
           
           double length = 2 * PI * a / c;
           System.out.printf(Locale.US,"%.2f\n",length); 
       }
  }    
}