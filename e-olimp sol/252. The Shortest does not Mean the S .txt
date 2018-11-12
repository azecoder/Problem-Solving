import java.math.*;
import java.util.*;

public class Main {

   static  BigInteger ret=BigInteger.valueOf(1);
   static BigInteger r=BigInteger.valueOf(2);
 
     public static BigInteger rec(BigInteger a,BigInteger b,BigInteger m){
     
         a=a.remainder(m);
         if(b.compareTo(BigInteger.valueOf(0))==0)
             return BigInteger.valueOf(1);
         else if((b.remainder(r)).compareTo(BigInteger.valueOf(0))==0){
             ret = rec(a, b.divide(BigInteger.valueOf(2)), m);
            ret=ret.multiply(ret);
         }
          else{
           ret = rec(a, (b.subtract(BigInteger.valueOf(1))).divide(r), m);
             ret=a.multiply(ret.multiply(ret));
         }
       return ret.remainder(m);
   }

   public static void main(String[] args) {

       Scanner in=new Scanner(System.in);
 
       while(in.hasNext()){
             BigInteger a=in.nextBigInteger();
              BigInteger b=in.nextBigInteger();
             BigInteger m=in.nextBigInteger();
           
           ret = rec(a,b,m);
             System.out.println(ret);
       }
   }
}