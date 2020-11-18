import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

   public static void main(String[] args) throws IOException {
       InputStreamReader isr = new InputStreamReader(System.in);
       BufferedReader br = new BufferedReader(isr);
       StringBuffer sb = new StringBuffer("");
       String m = "";
       while((m=br.readLine())!=null) {
           StringTokenizer st=new StringTokenizer(m);
           int x=Integer.parseInt(st.nextToken());
           int y=Integer.parseInt(st.nextToken());
           int[] sol=ExtEuc(x, y);
           sb.append(sol[1]).append(" ").append(sol[2]).append(" ").append(sol[0]).append("\n");
       }
       System.out.print(sb);
   }
      

   static int[] ExtEuc(int x, int y) {
       int[] sol = new int[3];
       int tempInt;
       if (y == 0) {
           sol[0] = x;
           sol[1] = 1;
           sol[2] = 0;
       } else {
           tempInt = x / y;
           sol = ExtEuc(y, x % y);
           int temp = sol[1] - sol[2] * tempInt;
           sol[1] = sol[2];
           sol[2] = temp;
       }
        //x=sol[1]   y=sol[2]    GCD=Sol[0]
       return sol;
   }
}