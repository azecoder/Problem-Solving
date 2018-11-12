import java.util.Arrays;
import java.util.LinkedList;
import java.util.Locale;
import java.util.Scanner;

public class Main {

   /**
    * @author Tabriz
    */
   private int n, m;
   private int[][] mas;
   private int[][] mas1;
   private int[] used;
   private int[] parents;
   private int ans = 0;
   private LinkedList<Integer> list;
   private double D[] ;
   private Scanner in;

   public static void main(String[] args) {
       new Main().run();

   }

   private void run() {
       in = new Scanner(System.in);

       n = in.nextInt();
       m = in.nextInt();
       mas = new int[101][101];
       mas1 = new int[101][101];
   
       int a, b, c;
       for (int i = 1; i <= m; i++) {
           a = in.nextInt();
           b = in.nextInt();
           mas[a][b] = (c = in.nextInt());
           mas[b][a] = c;
       }
       D = new double[1001];
       used = new int[1001];
       used[1]=1;
       D[1]=100;
       dfs(1);
       System.out.printf(new Locale("US","us"),"%.6f percent",D[n]);

   }

   void dfs(int j) {
       double max=0;
       double temp;
       if(j==n){ return;}
       
       for(int i=1;i<=n;i++)
           if( mas[j][i]>0 && D[i]<(D[j]*mas[j][i]/100)){
           
           D[i] = D[i]<(D[j]*mas[j][i]/100)?D[j]*mas[j][i]/100:D[i];
            dfs(i);
           }
   }
}

class InputReader {
   InputReader() {
   }
} 