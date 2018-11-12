import java.util.*;
import java.math.*;

public class Main {

   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       BigInteger n = in.nextBigInteger();
       System.out.println(n.subtract(BigInteger.ONE));
   }
}