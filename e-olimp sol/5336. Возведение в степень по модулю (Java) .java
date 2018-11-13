import java.util.*;
import java.math.*;

public class Main 
{

      static  BigInteger ret=BigInteger.valueOf(1);
      static BigInteger r=BigInteger.valueOf(2);

       public static BigInteger rec(BigInteger a,BigInteger b)
       { 
  
                   BigInteger m = new BigInteger("1000000007");
              a=a.remainder(m);
              b=b.remainder(m);
    
              if(b.compareTo(BigInteger.valueOf(0))==0)
                             return BigInteger.valueOf(1);
             else if((b.remainder(r)).compareTo(BigInteger.valueOf(0))==0)
             {
                          ret = rec(a.remainder(m), b.remainder(m).divide(BigInteger.valueOf(2)));
                         ret=ret.remainder(m).multiply(ret);
             }
               else
             {
                              ret = rec(a.remainder(m), (b.remainder(m).subtract(BigInteger.valueOf(1))).divide(r));
                          ret=a.remainder(m).multiply(ret.remainder(m).multiply(ret));
               }

       return ret.remainder(m);
       }

       public static void main(String[] args) 
       {

              Scanner in=new Scanner(System.in);

               BigInteger a=in.nextBigInteger();
              BigInteger b=in.nextBigInteger();
                 BigInteger m = new BigInteger("1000000007");

              ret=rec(a,b);
              ret.remainder(m);
               System.out.println(ret);
       }

}