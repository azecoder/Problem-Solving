import java.util.*;
import java.math.*;

public class Main {

   public static final BigInteger six = new BigInteger("6");
   
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       BigInteger n = input.nextBigInteger();
       System.out.println((n.multiply(n)).multiply(six));
   }
}