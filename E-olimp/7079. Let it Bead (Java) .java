import java.util.*;

/*
* @author Tabriz
*/
public class Main {

  public static void main(String[] args) {
     
      Scanner in = new Scanner (System.in);
     
      while(in.hasNextInt()) {
         
          long f[] = new long [10001];
          for(int i = 1; i <= 40; i++)
              for(int j = 1; j <= i; j++)
                  if(gcd(i,j) == 1)   f[i] ++;
         
         
          int k = in.nextInt();
          int n = in.nextInt();
          if(n == 0 && k == 0) break;
         
          int i; long sum = 0;
          for(i = 1; i <= n; i++)
              if(n%i == 0)
                  sum += (f[n/i] * powr(k, (int) i));
         
          if(n%2 == 1) {
              System.out.println( (long)(sum + n*k*powr(k,(n-1)/2))/(2*n) );
          }
          else
              System.out.println( (long)(sum + (n/2)*powr(k,(n/2)) + (n/2)*k*k*powr(k,((n-2)/2)))/(2*n) );
      }
  }

  private static long gcd(int a, int b) {
      if(b == 0) return a;
      return gcd(b,a%b);
  }

  private static long powr(int i, int i0) {
      long p = 1;
      for(int j = 0; j < i0; j++)
          p *= i;
     
      return p;
  }
 
} 