import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       int n = input.nextInt();    int m = input.nextInt();
       
       if( n == 2 ){
           if(((m % 100) == 0) && ((m % 400) != 0))
               System.out.println("28");
           else if(((m % 4) == 0))
               System.out.println("29");
           else
               System.out.println("28");
       }
       else if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
           System.out.println("31");
       else
           System.out.println("30");
   }
}