import java.util.Scanner;
import java.math.BigInteger;

public class Main {
   
   public static void main(String[] args) {
   
       Scanner input = new Scanner(System.in);
       
       BigInteger n = input.nextBigInteger();
       BigInteger m = input.nextBigInteger();
       BigInteger product = n.multiply(m);
       
       System.out.println(product.divide(n.gcd(m)));
   }
}