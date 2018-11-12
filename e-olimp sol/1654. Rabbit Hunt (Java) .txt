import java.util.*;

public class Main {
   private static int[] x = new int [205];;
   private static int[] y = new int [205];;
   
   public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       
       int n = input.nextInt();
       
       for(int i = 0;i < n; i++){
           x[i] = input.nextInt();
           y[i] = input.nextInt();
       }
       int cnt;
       int maxi = -2147483647;
       for(int i = 0;i < n; i++){
           for(int j = i+1; j < n; j++){
               cnt = 2;
               for(int k = j+1; k < n; k++){
                   if(triangleArea (i,j,k) == 0) cnt++;
               }
               if(cnt > maxi) maxi = cnt;
           }
       }
       System.out.println(maxi);
   }

   private static int triangleArea(int a, int b, int c) {
       return x [a] * (y [b] - y [c]) + x [b] * (y [c] - y [a]) + x [c] * (y [a] - y [b]);
   }    
}