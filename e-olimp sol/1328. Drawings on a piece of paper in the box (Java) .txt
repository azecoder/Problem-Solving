import java.io.InputStream;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

 
  public static void main(String[] args) {
      BigInteger a , b , c , d;
      Scanner in = new Scanner(System.in);
     
      a = in.nextBigInteger();
      b = in.nextBigInteger();
      c = a; d = b;
     
      a = a.add(BigInteger.valueOf(1));
      b = b.add(BigInteger.valueOf(1));
      c = c.multiply(a); d = d.multiply(b);
      c = c.divide(BigInteger.valueOf(2));
      d = d.divide(BigInteger.valueOf(2));
      c = c.multiply(d);
     
      System.out.println(c);
  }
} 