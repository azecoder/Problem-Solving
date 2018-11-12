import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       int a = input.nextInt();    
       int b = input.nextInt();
       int c = input.nextInt();
       
       int anw = (int)Math.sqrt((a*a + b*b + c*c));
       System.out.println(anw);
       
   }
}