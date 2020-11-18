import java.util.*;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       
       input.useLocale(new Locale("US"));
       double n = input.nextDouble();   double p = input.nextDouble();
       
       double k = Math.pow((Math.E),Math.log(p)/n);
       
       System.out.printf(Locale.US,"%.0f\n",k);    
       }
   }