import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

   static final int MAXN = 1002;
   static List<Integer> g[] = new ArrayList[MAXN];
   private static int[] d = new int[MAXN];
   private static int[] money = new int[MAXN];
   private static boolean[] used = new boolean[MAXN];
   private static boolean[] leaf = new boolean[MAXN];
   private static int ans = MAXN;

   public static void main(String[] args) {

       Scanner in = new Scanner(System.in);

       int n = in.nextInt();
       for(int i = 1; i <= n; i++) g[i] = new ArrayList();
       for (int i = 1; i <= n; i++) {
           money[i] = in.nextInt();
           int ways = in.nextInt();
           if (ways == 0) {
               leaf[i] = true;    // if true, then means it is leaf
           } else {
               for (int j = 1; j <= ways; j++) {
                   int x = in.nextInt();
                   g[i].add(x);
               }
           }
       }
       int sum = money[1];
       dfs(1, sum);
       System.out.println(ans);
   }

   private static void dfs(int v, int sum) {
       used[v] = true;
       
       if(leaf[v] == true) {
           ans = Math.min(ans, sum);
       }
       for (int i = 0; i < g[v].size(); i++) {
           int to = g[v].get(i);
           if (!used[to]) {
               dfs(to, (sum + money[to]));
           }
       }

   }
} 