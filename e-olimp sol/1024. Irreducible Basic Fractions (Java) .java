import java.util.*;

public class Main {

   public static void main(String[] args) {

       Scanner input = new Scanner (System.in);


       while(input.hasNextLong()){
           long n = input.nextLong();
           if(n == 0)  break;
           System.out.println(totient(n));
       }
   }

   private static long totient(long n) {
       long res;
       long j;
   if (n==1)   return 1;
       
       res=n;
       if (n%2==0){
           res-=res/2;
           while (n%2==0) n/=2;
       }
       for (j=3; j*j<=n; j+=2){
           if (n%j==0){
               res-=res/j;
       while (n%j==0) n/=j;
           }
   }
   if (n>1) res-=res/n;
   return res;
   }
}