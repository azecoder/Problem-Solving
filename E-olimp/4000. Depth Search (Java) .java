import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

   /**
    *
    * @author Tabriz
    */
 
   private static int[][] Arr = new int[109][109];
   private static List <Integer> G[] = new ArrayList [109];
   private static int ans = 1;
   private static boolean[] used = new boolean [109];
   
   public static void main(String[] args) {
   
       Scanner in = new Scanner(System.in);
       int n = in.nextInt();
       int s = in.nextInt();
       
       for(int i = 1; i <= n; i++) {
           G[i] = new ArrayList();
       }
       for(int i = 1; i <= n; i++) {
           for(int j = 1; j <= n; j ++) {
               Arr[i][j] = in.nextInt();
               if(Arr[i][j] == 1) {
                   G[i].add(j);
               }
           }
       }
       dfs(s);
       System.out.println(ans);
   }

   private static void dfs(int s) {
       used[s] = true;
       for(int i = 0; i < G[s].size(); i++) {
           if(used[G[s].get(i)] == false) {
               ans ++;
               dfs(G[s].get(i));
           }
       }
   }

} 