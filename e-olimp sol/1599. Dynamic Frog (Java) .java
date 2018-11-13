import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {
   private static void debug(Object...os) {
       System.out.println(Arrays.deepToString(os));
   }

   public static void main(String[] args) {
       
       Scanner input = new Scanner(System.in);
       int T = input.nextInt();
       for (int c = 1; T-- != 0; ++c) {
           int n = input.nextInt();
           int d = input.nextInt();
           List<Integer> dist = new ArrayList<Integer>();
           dist.add(0);
           dist.add(0);
           for (int i = 0; i < n; ++i) {
               String[] now = input.next().split("-", -1);
               int curD = Integer.parseInt(now[1]);
               dist.add(curD);
               if (now[0].equals("B"))
                   dist.add(curD);
           }
           dist.add(d);
           dist.add(d);
           int leap = Integer.MIN_VALUE;
           for (int i = 2; i < dist.size(); ++i)
               leap = Math.max(leap, dist.get(i) - dist.get(i - 2));
           System.out.printf("Case %d: %d\n", c, leap);
       }
   }
} 