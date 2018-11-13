import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       int n = input.nextInt();    int m = input.nextInt();
       
       n -= m;
       n *= 2;
       int x = (int)Math.sqrt(n);
       for(int i = x; i >= 0; i--)
           if((n % i) == 0){
               System.out.println(i);
               break;
           }
   }
}