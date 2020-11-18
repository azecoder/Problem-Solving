import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       double n = input.nextDouble();
       
       double cost = 1.2;
       int l = 0;
       while(1.20 <= n){
           n -= cost;
           n += 0.2;
           l++;
       }
       System.out.println(l);
   }
}