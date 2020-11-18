import java.util.*;

class Main
{
public static void main(String args[]){
   Scanner input = new Scanner(System.in);
  
   int i,j;
   i = input.nextInt();
   j = input.nextInt();
   
   
   if(i > j){
       int c;
           c = j;
           j = i;
           i = c;
   }
   int count = 0;
   if(i == 1) i = 2;
   for(int k = i; k <= j; k++){

       int l = k;
       int n = l;
       int m = 0;
       while(l != 0){
           m *= 10;
           m += l%10;
           l /= 10;
         }
      
       if((prime(n) == true) && (prime(m) == true))  count++;
   }
   System.out.println(count);
}

 private static boolean prime(int n) {
     int t = (int) Math.sqrt(n);
     for(int i = 2; i <= t; i++){
         if(n%i == 0)
             return false;
     }
     return true;
 }
}