import java.util.*;
import java.math.*;

public class Main {

   static BigInteger ebob(BigInteger a,BigInteger b)
    {
         return (a.multiply(b)).divide(a.gcd(b));

    }
 
 
    public static void main(String[] args) {
         Scanner scan = new Scanner(System.in);
         int x; 
         BigInteger y = new BigInteger("1");
         BigInteger z = new BigInteger("1");
         BigInteger c = new BigInteger("1");
 
         x=scan.nextInt();
 
         for(int i=1;i<=x;i++)
         {
             c=ebob(c,y);
             y=y.add(z);
     
         }
 
 

   
        System.out.println(c);
       
   }
}