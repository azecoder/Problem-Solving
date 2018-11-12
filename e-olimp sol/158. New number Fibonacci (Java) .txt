import java.math.*;
import java.util.*;

public class Main {

      public static void main(String args[]){
                 Scanner in=new Scanner(System.in);
                 BigInteger a[]=new BigInteger[10000];
              a[1]=BigInteger.valueOf(1);
              a[2]=BigInteger.valueOf(1);
              a[3]=BigInteger.valueOf(1);
              a[4]=BigInteger.valueOf(1);
              a[5]=BigInteger.valueOf(4);

              for(int i=6;i<=7050;i++)
                         a[i]=a[i-1].multiply(BigInteger.valueOf(2)).subtract(a[i-5]);
             int n;
                   n=in.nextInt();
             for(int i=1;i<=n;i++){
                         int t=in.nextInt();
                       System.out.println(a[t]);
             }
     }
}