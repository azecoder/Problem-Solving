import java.util.*;
import java.math.*;

public class Main {
  private static BigInteger one;

   static BigInteger ekob(BigInteger a,BigInteger b){
   
        BigInteger c;
        c=(a.multiply(b)).divide(a.gcd(b));
    
        return c;
   }


   public static void main(String[] args) {
          Scanner scan = new Scanner(System.in);
        int n;
        BigInteger[] a = new BigInteger[1001];

        BigInteger y = new BigInteger("1");
        BigInteger z = new BigInteger("1");
        BigInteger c = new BigInteger("1");
        BigInteger bir = new BigInteger("1");
        BigInteger iki = new BigInteger("1");

        n=scan.nextInt();
   
        for(int i=1; i<=n; i++){
            a[i]=iki;
            iki=iki.add(bir);
        }
        for(int i=1;i<n;i++){
            a[i+1]=ekob(a[i],a[i+1]);
        }

       System.out.println(a[n].subtract(bir));
   }
}