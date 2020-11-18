import java.math.BigInteger;
import java.util.Scanner;

public class Main{
   
   void run(){
       Scanner in = new Scanner(System.in);
       for(;in.hasNext();){
           String line = in.next();
           if(line.equals("0")){
               break;
           }
           int n = line.length();
           if(n < 6){
               System.out.println("0/1");
               continue;
           }
           if((new BigInteger(line.substring(2, n-3))).equals(BigInteger.ZERO)){
               System.out.println("0/1");
               continue;
           }
           BigInteger ay = BigInteger.ZERO, ax = BigInteger.TEN.pow(100);
           for(int l=1; l<=n-5; ++l){
               String first = line.substring(n-3-l-(n-5-l),n-3-l), second = line.substring(n-3-l, n-3);
               BigInteger x = BigInteger.TEN.pow(first.length() + second.length()).subtract(BigInteger.TEN.pow(first.length()));
               BigInteger y = (new BigInteger(first + second)).subtract(first.length() > 0 ? (new BigInteger(first)) : BigInteger.ZERO);
               BigInteger d = x.gcd(y);
               x = x.divide(d);
               y = y.divide(d);
               if(x.compareTo(ax) < 0){
                   ax = x;
                   ay = y;
               }
           }
           System.out.println(ay + "/" + ax);
       }
   }
   
   public static void main(String args[]){
       new Main().run();
   }
}