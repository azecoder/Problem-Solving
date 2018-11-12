import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


/**
*
* @author Tebriz
*/
public class Main {

   public static int n, k, a, b, d;
   public static int x, y;
   private static boolean[] used = new boolean [51];
   private static int ans;

   /**
    *
    */
   public static List <Integer>[] G = new ArrayList [51];
   
   public static void main(String[] args) {
       
       Scanner in = new Scanner (System.in);
       n = in.nextInt();   //  Number of hostels
       k = in.nextInt();   //  Number of mountain routes
       a = in.nextInt();   //  Start
       b = in.nextInt();   //  Finish
       d = in.nextInt();   //  Arriving day
       
       for(int i = 0; i < n + 1; i++)
           G[i] = new ArrayList();
       for(int i = 0; i < k; i++) {
           x = in.nextInt();
           y = in.nextInt();
           G[x].add(y);
       }
       used[a] = true;
       dfs(a, 0);
       System.out.println(ans);
   }

   private static void dfs(int v, int day) {
       if(day <= d && v == b) {
           ans ++;
           return;
       }
       for(int i = 0; i < (int)(G[v].size()); i++) {
           int to = G[v].get(i);
           if(!used[to] && day < d) {
               used[to] = true;
               dfs(to, day + 1);
               used[to] = false;
           }
       }
   }
   
} 