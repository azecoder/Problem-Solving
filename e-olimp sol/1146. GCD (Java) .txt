import java.util.Scanner;
public class Main {


   public static void main(String[] args) {
       Scanner x = new Scanner (System.in);
       while(true){
           long n = x.nextInt();
           
           if(n == 0){
               break;
           }
           else{
               long sum = n-1;
               for(int i = 2; i < n; i++){
                   for(int j = i+1; j <= n; j++){
                       sum += GCD(i,j);
                   }
               }
               System.out.println(sum);
           }
       }

   }

   private static long GCD(int i, int j) {
       if(j == 0)  return i;
       else        return GCD(j,i%j);
   }
}