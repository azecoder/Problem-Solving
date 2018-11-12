import java.util.*;

public class Main {
   
   public static void main(String[] args) {
       
       Scanner input = new Scanner (System.in);
       
       int n = input.nextInt();
       int fib_1 = 0;
       int fib_2 = 1;
       int fib_3;
       int l = 1;
       while(l <= n){
           fib_3 = fib_1 + fib_2;
           fib_1 = fib_2;
           fib_2 = fib_3;
           if(prime(fib_2) == true) l++;
       }
       System.out.println(fib_2);
   }

   private static boolean prime(int x) {
       int k = 0;
       if(x == 1)          return false;
       else if(x == 2 || x == 3)     return true;
       else{
           int p = (int) Math.sqrt(x);
           for(int i = 2; i <= p; i++){
               if(x%i == 0){
                   k = 1;
                   break;
               }
           }
           if(k != 0) return false;
           else       return true; 
       }
   }
}