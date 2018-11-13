import java.util.*;

/*
* @author Tabriz
*/
public class Main {
   
   public static void main(String[] args) {
       
       Scanner in = new Scanner (System.in);
       
       while(in.hasNextLong()) {
           
           long n = in.nextLong();
           long r = n;
           
           for(long i = 2; i*i <= n; i++) {
               if(n%i == 0) {
                   long p = i;
                   long a =0;
                   while(n%p == 0) {
                       ++a;
                       n /= p;
                   }
                   r += (r*a*(p-1)/p);
               }
           }
           if(n != 1) {
               r = r*(2*n-1)/n;
           }
           System.out.println(r);
       }
   }
   
} 