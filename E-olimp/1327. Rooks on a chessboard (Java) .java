import java.math.*;
import java.util.*;

public class Main {
    public static void main(String args[]) {
     
       Scanner input=new Scanner(System.in);

       int n=input.nextInt();
       BigInteger f=BigInteger.valueOf(1);
       if(n==0)
          System.out.println(1);
       else {
          for(int i=1;i<=n;i++)
             f = f.multiply(BigInteger.valueOf(i));
          System.out.println(f);
       }
    }
}