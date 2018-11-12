import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.*;

/**
*
* @author Tabriz
*/
public class Main {

   /**
    * @param args the command line arguments
    */
   private int n, x, y;
   private int used[];
   private int[] child;
   private List<Integer> list[];
   private int[] DFS;

   public static void main(String[] args) {
       new Main().run();

   }

   void run() {

       InputStream inputStream = System.in;
       InputReader in = new InputReader(inputStream);
       n = in.nextInt();


       DFS = new int[1000111];
       used = new int[n + 1];
       child = new int[n + 1];
       list = new ArrayList[50001];

       for (int i = 0; i <= n; i++) {
           list[i] = new ArrayList<Integer>();
       }

       for (int i = 0; i < n - 1; i++) {
           x = in.nextInt();
           y = in.nextInt();

           list[x].add(y);
           list[y].add(x);

       }
       used[1] = 1;
       dfs(1);

       int m = 0, indx = Integer.MAX_VALUE, indx1 = Integer.MAX_VALUE, min = Integer.MAX_VALUE;
       boolean bool = false;

       for (int i = 1; i <= n; i++) {
           if (n % 2 == 0 && child[i] == n / 2 && indx > i) {
               indx = i;
               bool = true;
           }
           if (child[i] > n / 2 && min > child[i]) {
               indx1 = i;
               min = child[i];
           }
       }


       if (bool) {
           if (indx < indx1) {
               System.out.println(indx + " " + indx1);
           } else {
               System.out.println(indx1 + " " + indx);
           }
       } else {
           System.out.println(indx1);
       }


   }

   int dfs(int i) {
       if (child[i] != 0) {
           return child[i];
       }
       int m = 1;
       for (Integer j : list[i]) {
           if (used[j] == 0 ) {
               used[j] = 1;
               m += dfs(j);
           }
       }
       child[i] = m;

       return m;

   }
}

class InputReader {

   public BufferedReader reader;
   public StringTokenizer tokenizer;

   public InputReader(InputStream stream) {
       reader = new BufferedReader(new InputStreamReader(stream));
       tokenizer = null;
   }

   public String next() {
       while (tokenizer == null || !tokenizer.hasMoreTokens()) {
           try {
               tokenizer = new StringTokenizer(reader.readLine());
           } catch (IOException e) {
               throw new RuntimeException(e);
           }
       }
       return tokenizer.nextToken();
   }

   public int nextInt() {
       return Integer.parseInt(next());
   }
} 