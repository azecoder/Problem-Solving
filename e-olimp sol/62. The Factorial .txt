import java.util.Scanner;
import java.math.BigInteger;

public class Main {
  public static void main(String[] args) {
      Scanner x = new Scanner(System.in);
      BigInteger n = x.nextBigInteger();
      
      System.out.println(faktorial(n));
              
  }

  private static BigInteger faktorial(BigInteger n) {
      BigInteger m = BigInteger.ONE;
      BigInteger result = BigInteger.ONE;
      while(!n.equals(result)){
          m = m.add(BigInteger.ONE);
          result = result.multiply(m);
      }
      return m;
  }
}