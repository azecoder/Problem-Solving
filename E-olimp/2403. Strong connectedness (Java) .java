import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
   
   private static int MAXN = 10001;
   private static int n, m;
   public static List<Integer>[] G = new ArrayList[MAXN];
   public static List<Integer>[] _G = new ArrayList[MAXN];
   private static int x, y;
   private static boolean[] used = new boolean[MAXN];
   public static List<Integer> list = new ArrayList();

   /**
    *
    * @author Tabriz
    */
   public static void main(String[] args) {
       
       Scanner in = new Scanner(System.in);
       n = in.nextInt();
       m = in.nextInt();
       for (int i = 1; i <= n; i++) {
           G[i] = new ArrayList();
       }
       for (int i = 1; i <= n; i++) {
           _G[i] = new ArrayList();
       }
       for (int i = 1; i <= m; i++) {
           x = in.nextInt();
           y = in.nextInt();
           G[x].add(y);
           _G[y].add(x);
       }
       for (int i = 1; i <= n; i++) {
           if (!used[i]) {
               dfs(i);
           }
       }
       for (int i = 0; i < used.length; i++) {
           used[i] = false;
       }
       int ans = 0;
       for (int i = (int) list.size() - 1; i >= 0; i--) {
           int v = list.get(i);
           if (!used[v]) {
               _dfs(v);
               ans++;
           }
       }
       System.out.println(ans);
   }
   
   private static void dfs(int v) {
       
       used[v] = true;
       for (int i = 0; i < G[v].size(); i++) {
           int to = G[v].get(i);
           if (!used[to]) {
               dfs(to);
           }
       }
       list.add(v);
   }
   
   private static void _dfs(int v) {
       
       used[v] = true;
       for(int i = 0; i < _G[v].size(); i++) {
           int to = _G[v].get(i);
           if(!used[to]) {
               _dfs(to);
           }
       }
   }
   
} 