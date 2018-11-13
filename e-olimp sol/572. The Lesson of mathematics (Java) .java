import java.util.*;

class Main
{
  public static void main(String args[]){
      Scanner input = new Scanner (System.in);
      
      long n = input.nextLong();
      if(n == 1) System.out.println("1");
      else{
           long t = (long) Math.sqrt(n);
           for(int i = 2; i <= t; i++){
                int k = 0;
                while(n%i == 0){
                   n /= i;
                   k++;
               }
               if(k != 0 && k != 1){
                   System.out.print(i + "^" + k);
                   if(n != 1) System.out.print("*");
               }
               else if(k == 1){
                   System.out.print(i);
                   if(n != 1) System.out.print("*");
               }
           }
           if(n != 1) System.out.print(n);
           System.out.println();           
      }
  }
}