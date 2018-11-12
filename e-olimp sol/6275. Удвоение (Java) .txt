import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       int n = input.nextInt();
       int m = n;
       if(m < 0) m = n * -1;
       int a = m / 100;
       int b = (m / 10) % 10;
       int c = m % 10;
       if(n < 0)
           System.out.print("-");
       System.out.print(a);  System.out.print(a);
       System.out.print(b);  System.out.print(b);
       System.out.print(c);  System.out.println(c);
   }
}