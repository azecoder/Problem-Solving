import java.util.Scanner;
import java.math.BigInteger;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       long length = input.nextLong();
       BigInteger a;
       BigInteger b;
       BigInteger c;
       if(length > 1){
           a = input.nextBigInteger();
           b = input.nextBigInteger();
           
           a = ((a.multiply(b))).divide(a.gcd(b));
           
           for(long i = 1; i <= length - 2; i++){
               c = input.nextBigInteger();
               a = ((a.multiply(c))).divide(a.gcd(c));
           }
           System.out.println(a);
       }
       else{
           a = input.nextBigInteger();
           System.out.println(a);
       }
   }
}