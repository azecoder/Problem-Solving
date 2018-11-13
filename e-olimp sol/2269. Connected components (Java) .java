import java.util.*;

/**
*
* @author Student
*/
public class Main {

   /**
    * @param args the command line arguments
    */
   private int n;
   private int[][] mas = new int[101][101];
   private int[] used;

   public static void main(String[] args) {
       new Main().run();

   }

   private void run() {
       Scanner in = new Scanner(System.in);
       used = new int[100];
       int tm;
       n = in.nextInt();
       for (int i = 0; i < n; i++) {
           for (int j = 0; j < n; j++) {
               mas[i][j] = (tm = in.nextInt());
               mas[j][i] = tm;
           }
       }

       int ans = 0;
     

       for (int i = 0; i < n; i++) {
           if (used[i] == 0) {
               dfs(i);
               ans++;

           }
       }







       System.out.println(ans);




   }

   void dfs(int j) {
   
       for (int i = 0; i < n; i++) {
           if (used[i] != 1 && mas[i][j] == 1) {
               used[i] = 1;
               dfs(i);
           }
       }


   }
} 