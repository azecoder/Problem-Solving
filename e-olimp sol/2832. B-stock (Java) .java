import java.util.Scanner;

/*
* author: Tabriz Hajiyev
*/
public class Main {
   
   private static int MAXN = 10010;
   private static int n;
   private static int a[] = new int [MAXN];
   private static int st[] = new int [50050];
   
   public static void main(String args[]) {
   
       Scanner input = new Scanner (System.in);
       
       long ans = 0;

       n = input.nextInt();
       
       for (int i = 0; i < n; i++) {
           a[i] = input.nextInt();
           ans += a[i];
       }
       build(1 , 0 , n - 1);

       int q = input.nextInt();
       for (int w = 0; w < q; w++) {
           int k = input.nextInt();
           int p = findpos(k);
           if (p == -1) continue;
           add(1 , 0 , n - 1 , p , -k);
           ans -= k;
       }
       System.out.println(ans);
   }

   private static void build(int v, int l, int r) {
       if (l == r) {
           st[v] = a[l];
           return;
       }
       int mid = (l + r) / 2;
       build(2 * v , l , mid);
       build(2 * v + 1, mid + 1 , r);
       st[v] = Math.max(st[2 * v] , st[2 * v + 1]);        
   }

   private static int findpos(int val) {
       if (get_max(1 , 0 , n - 1 , 0 , n - 1) < val)
           return -1;
       int l = 0 , r = n - 1;
       while (l < r) {
           int mid = (l + r) / 2;
           if (get_max(1 , 0 , n - 1 , 0 , mid) < val) l = mid + 1;
           else r = mid;
       }
       return l;    
   }

   private static void add(int v, int l, int r, int pos, int val) {
       if (l == r && l == pos) {
           st[v] += val;
           return;
       }
       int mid = (l + r) / 2;
       if (pos <= mid)
           add(2 * v , l , mid , pos , val);
       else
           add(2 * v + 1 , mid + 1 , r , pos , val);
       st[v] = Math.max(st[2 * v] , st[2 * v + 1]);    
   }

   private static int get_max(int v, int l, int r, int l1, int r1) {
       if (r < l1 || l > r1)
           return 0;
       if (l >= l1 && r <= r1)
           return st[v];
       int mid = (l + r) / 2;
       return Math.max(get_max(2 * v , l , mid , l1 , r1) , get_max(2 * v + 1 , mid + 1 , r , l1 , r1));    
   }
   
} 