import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

/*
* author: Tabriz Hajiyev
*/
public class Main {
   
   private static int MAXN = 1001;
   private static int Arr[] = new int [MAXN];
       
   public static void main(String args[]) {
   
       Scanner input = new Scanner (System.in);
       
       int T = input.nextInt();
       for (int w = 1; w <= T; w++) {
           
           int n = input.nextInt();
           for (int i = 0; i < n; i++)    Arr[i] = input.nextInt();
           
           Arrays.sort(Arr , 0, n);
           int f = Arr[0] , s = Arr[n-1] , k = n - 2;
           int i = 1 , j = n - 2 , cvb = Math.abs(f - s);
           
           while (k > 0) {
               int cem_1 = i < n - 1 ? Math.abs(Arr[i] - f) : 0;
               int cem_2 = i < n - 1 ? Math.abs(s - Arr[i]) : 0;
               int cem_3 = j > 0 ? Math.abs(Arr[j] - f) : 0;
               int cem_4 = j > 0 ? Math.abs(s - Arr[j]) : 0;
               if (cem_1 == Math.max(cem_1 , Math.max(cem_2 , Math.max(cem_3 , cem_4)))) {
                   f = Arr[i];
                   i++;
                   cvb += cem_1;
               }
               else if (cem_2 == Math.max(cem_1 , Math.max(cem_2 , Math.max(cem_3 , cem_4)))) {
                   s = Arr[i];
                   i++;
                   cvb += cem_2;
               }
               else if (cem_3 == Math.max(cem_1 , Math.max(cem_2 , Math.max(cem_3 , cem_4)))) {
                   f = Arr[j];
                   j--;
                   cvb += cem_3;
               }
               else if (cem_4 == Math.max(cem_1 , Math.max(cem_2 , Math.max(cem_3 , cem_4)))) {
                   s = Arr[j];
                   j--;
                   cvb += cem_4;
               }
               k--;
           }
           System.out.println("Case "+ w +": "+ cvb);
       }
       
   }

} 