import java.util.Scanner;
import java.math.BigInteger;
public class Main {

   public static void main(String[] args) {
       Scanner x = new Scanner (System.in);
       BigInteger A = x.nextBigInteger();
       BigInteger B = x.nextBigInteger();
       BigInteger M = x.nextBigInteger();
       
       BigInteger Z = A.modPow(B, M);
       System.out.println(Z);
   }
}