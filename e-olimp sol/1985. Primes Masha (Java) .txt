import java.util.*;

class Main
{
public static void main(String args[]){
  Scanner input = new Scanner(System.in);
  while(input.hasNextInt()){
           int n;
               n = input.nextInt();
  
           int k = n/2;
           int l = n;
           int j = 0;
           for(int i = 2; i <= k; i++){
                   if((prime(i) == true) && (prime(n-i) == true)){
                       if((n - (2*i)) <= l){
                           l = n - (2*i);
                           j = i;
                       }
                   }     
               }
               System.out.println(j + " " + (n - j)); 
       }
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