import java.math.BigInteger;
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       
       Scanner input = new Scanner (System.in);
       
       int i,n;
       BigInteger x1 = new BigInteger("0");
       BigInteger x2 = new BigInteger("1");
       BigInteger p;
       BigInteger [] a = new BigInteger [1001];
       
       a[0]=x1;
       a[1]=x2;
       
       for(i=2; i<1000; i++)
           a[i]=a[i-1].add(a[i-2]);
       
       
       while(input.hasNextInt())
       {
           n=input.nextInt();
           System.out.println(a[n]);
       }
   }
}