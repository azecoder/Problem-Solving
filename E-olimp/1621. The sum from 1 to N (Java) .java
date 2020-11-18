import java.util.*;
import java.math.*;
public class Main {


   public static void main(String[] args) {
       Scanner x = new Scanner (System.in);

           BigInteger n = x.nextBigInteger();
           BigInteger two = new BigInteger("2");
           BigInteger result ;         
           if(n.signum() == +1){
               if((n.mod(two)).equals(BigInteger.ZERO)){
                   BigInteger r = n.divide(two);
                   result = (n.add(BigInteger.ONE)).multiply(r);
               }
               else{
                   BigInteger r = (n.add(BigInteger.ONE)).divide(two);
                   result = n.multiply(r);
               }
           }
           else{
               if((n.mod(two)).equals(BigInteger.ZERO)){
                   BigInteger r = n.divide(two);
                   result = (BigInteger.ONE).subtract((n.subtract(BigInteger.ONE)).multiply(r));
               }
               else{
                   BigInteger r = (n.subtract(BigInteger.ONE)).divide(two);
                   result = (BigInteger.ONE).subtract(n.multiply(r));
               }
           }
            System.out.println(result);        
   }
}