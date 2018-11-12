import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       int x = input.nextInt();
       System.out.println((int)Math.pow(2,x));
   }
}