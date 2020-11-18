import java.util.Scanner;
import java.math.BigInteger;

public class Main {
   
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       BigInteger a = input.nextBigInteger();
       BigInteger b = input.nextBigInteger();
       
       BigInteger w = new BigInteger ("16");
       BigInteger e = new BigInteger ("36");
       BigInteger r = new BigInteger ("32");
       
       BigInteger x = ((a.multiply(e)).add(b.divide(w))).mod(r);
       System.out.println(x);
   }
}