import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       StringBuffer sb = new StringBuffer("");
       long fib[] = new long[92];
       fib[0] = 1;
       fib[1] = 1;
       for (int i = 2; i < 92; i++) {
           fib[i] = fib[i - 2] + fib[i - 1];
       }
       int cases = Integer.parseInt(br.readLine());
       for (int i = 0; i < cases; i++) {
           long m = Long.parseLong(br.readLine());
           sb.append(m).append(" = ").append(toFibBase(m, fib)).append(" (fib)\n");
       }
       System.out.print(sb);
   }

   static String toFibBase(long x, long[] fib) {
       int index = fib.length - 1;
       while (x < fib[index]) {
           index--;
       }
       StringBuilder sb = new StringBuilder("");
       long temp = x;
       for (int i = index; i > 0; i--) {
           if (temp >= fib[i]) {
               sb.append('1');
               temp -= fib[i];
           } else {
               sb.append('0');
           }
       }
       return sb.toString();
   }
}