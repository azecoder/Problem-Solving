import java.util.Scanner;
import java.math.BigInteger;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       BigInteger a = input.nextBigInteger();    
       BigInteger b = input.nextBigInteger();
       
       System.out.println(b.mod(a));
   }
}