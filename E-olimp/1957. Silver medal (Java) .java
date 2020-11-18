import java.util.*;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       int n = input.nextInt();
       int a[] = new int[1001];
       for(int i = 0; i < n; i++)
           a[i] = input.nextInt();
       Arrays.sort(a, 0, n);
       for(int i = n-2; i >=0; i--){
           if(a[i] < a[i+1]){
               System.out.println(a[i]);
               break;
           }   
       }
   }
}