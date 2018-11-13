import java.util.*;

public class Main {
   
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       int n = input.nextInt();
       int a[] = new int [1001];
       int MAX = -101;
       int MIN = 101;
       for(int i = 0; i < n; i++){
           a[i] = input.nextInt();
           if(a[i] > MAX)  MAX = a[i];
           if(a[i] < MIN)  MIN = a[i];
       }
       System.out.println(MAX-MIN);
   }
}