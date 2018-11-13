import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;
import java.util.Vector;

public class Main {

   private static int MAXN = 100009;
   private static int n;
   private static long[] a = new long[MAXN];
   private static long[] dp = new long[MAXN];

   public static void main(String[] args) {

       Scanner in = new Scanner(System.in);

       n = in.nextInt();
       for (int i = 1; i <= n; i++) {
           a[i] = in.nextLong();
       }
       Arrays.sort(a, 1, n + 1);
       for (int i = 1; i <= n / 2; i++) {
           long temp = a[i];
           a[i] = a[n + 1 - i];
           a[n + 1 - i] = temp;
       }
       dp[1] = a[1];
       dp[2] = a[2] + dp[1];
       for (int i = 3; i <= n; i++) {
           dp[i] = a[i] + dp[i - 1];
           dp[i] = Math.min(dp[i], dp[i - 3] + f3(i - 2, i));
           if (i > 4) {
               dp[i] = Math.min(dp[i], dp[i - 4] + f4(i - 3, i));
           }
       }
       System.out.println(dp[n]);
   }

   private static long f3(int x, int v) {
       Vector<Long> myVec = new Vector();
       for (int i = x; i <= v; i++) {
           myVec.add(a[i]);
       }
       Collections.sort(myVec);
       return (myVec.get(v - x - 1) + myVec.get(v - x));
   }

   private static long f4(int x, int v) {
       Vector<Long> myVec1 = new Vector();
       for (int i = x; i <= v; i++) {
           myVec1.add(a[i]);
       }
       Collections.sort(myVec1);
       return (myVec1.get(v - x - 2) + myVec1.get(v - x - 1) + myVec1.get(v - x));
   }

} 