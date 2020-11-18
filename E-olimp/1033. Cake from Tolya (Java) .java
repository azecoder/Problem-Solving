import java.util.*;
import java.math.*;

public class Main {
   
  public static void main(String[] args) {
      Scanner input = new Scanner (System.in);
//***INPUT
      BigInteger n = input.nextBigInteger();
      BigInteger m = input.nextBigInteger();
      System.out.println((n.add(m)).subtract(n.gcd(m)));
  }
}