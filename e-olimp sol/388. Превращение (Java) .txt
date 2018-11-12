import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       int number = input.nextInt();
       int k = 0;
       int count = counter(number,k);
       System.out.println(count);
   }

   private static int counter(int n, int count){
       if(n == 1)
           return count;
       else{
           if((n % 2) == 0){
               count ++;
               n /= 2;
               return counter(n,count);
           }
           else{
               n += 1;
               count ++;
               return counter(n,count);
           }            
       }
   }
}