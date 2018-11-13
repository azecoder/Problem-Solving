import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       
       Scanner input = new Scanner (System.in);
       long n = input.nextLong();
       long m = input.nextLong();
       
       System.out.println((long)(Math.pow(2,n) + Math.pow(2,m)));
   }
}