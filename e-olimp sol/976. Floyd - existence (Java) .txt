import java.util.*;

/**
*
* @author Tebriz
*/
public class Main {

  /**
   * @param args the command line arguments
   */
  private int n;
  private int[][] mas = new int[101][101];
  private int[][] ans = new int[101][101];
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
              if (mas[i][j] == 0 && i != j) {
                  mas[i][j] = Integer.MAX_VALUE;
              }

          }
      }


      mas = floyd(mas, n);


      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n - 1; j++) {
             
              System.out.print(ans[i][j] + " ");
          }
         
          System.out.println(ans[i][n - 1]);
      }




      //      System.out.println(ans);




  }

  private int[][] floyd(int[][] mas, int n) {


      for (int k = 0; k < n; k++) {
          for (int i = 0; i < n; i++) {
              for (int j = 0; j < n; j++) {
                  if (mas[i][k] != Integer.MAX_VALUE && mas[k][j] != Integer.MAX_VALUE && mas[i][k] + mas[k][j] < mas[i][j]) {
                      mas[i][j] = mas[i][k] + mas[k][j];
                  }
                  if (mas[i][j] < -Integer.MAX_VALUE) {
                      mas[i][j] = Integer.MAX_VALUE;
                  }
              }
          }
      }
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
              ans[i][j] = 1;
              if (mas[i][j] == Integer.MAX_VALUE) {
                  ans[i][j] = 0;
                  continue;
              }
              for (int k = 0; k < n; k++) {
                  if (mas[k][k] < 0 && mas[i][k] != Integer.MAX_VALUE && mas[k][j] != Integer.MAX_VALUE) {
                      ans[i][j] = ans[i][k] = ans[k][j] = 2;
                  }
              }
          }
      }

      return mas;
  }
}