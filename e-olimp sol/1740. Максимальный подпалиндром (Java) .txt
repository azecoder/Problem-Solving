import java.util.Scanner;

/**
*
* @author Tebriz
*/
public class Main {

   private static int[][] Arr = new int[101][101];
   private static int[][] path = new int[101][101];

   ;

   public static void main(String[] args) {

       Scanner in = new Scanner(System.in);
       String s = in.next();
       LengthOfSubsequence(s);
       System.out.println(Arr[s.length()][s.length()]);
       PrintSubsequence(s, s.length(), s.length());

       System.out.println();
   }

   private static void LengthOfSubsequence(String s) {

       int len = s.length();

       for (int i = 1; i <= len; i++) {
           for (int j = 1; j <= len; j++) {
               if (s.charAt(len - i) == s.charAt(j - 1)) {
                   Arr[i][j] = Arr[i - 1][j - 1] + 1;
                   path[i][j] = 1; //  sol ve yuxari
               } else if (Arr[i - 1][j] >= Arr[i][j - 1]) {
                   Arr[i][j] = Arr[i - 1][j];
                   path[i][j] = 2; //  yuxari
               } else {
                   Arr[i][j] = Arr[i][j - 1];
                   path[i][j] = 0; //  sol
               }
           }
       }
   }

   private static void PrintSubsequence(String s, int i, int j) {

       if (i == 0 || j == 0) {
           return;
       }
       if (path[i][j] == 1) {
           PrintSubsequence(s, i - 1, j - 1);
           System.out.print(s.charAt(s.length() - i));
       } else if (path[i][j] == 2) {
           PrintSubsequence(s, i - 1, j);
       } else {
           PrintSubsequence(s, i, j - 1);
       }
   }

} 