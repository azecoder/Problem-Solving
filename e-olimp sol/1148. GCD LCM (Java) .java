import java.util.*;
import java.math.BigInteger;

public class Main {
 
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       int tests = input.nextInt();
       int i = 0;
       while(i < tests){
           
           BigInteger GCD = input.nextBigInteger();
           BigInteger LCM = input.nextBigInteger();

           if((LCM.mod(GCD)).equals(BigInteger.ZERO))
                   System.out.println(GCD +" "+ LCM);
           else
                   System.out.println("-1");            
       i++;
       }
   }    
}