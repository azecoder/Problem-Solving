import java.math.*;
import java.util.*;

public class Main {

public static void main(String[] args){
    Scanner input = new Scanner(System.in);

    int n=input.nextInt();

    if(n==1||n==2)
        System.out.println(1);
    else{
       BigInteger a=BigInteger.valueOf(1);
       BigInteger b=BigInteger.valueOf(1);
       BigInteger p = null;
      for(int i=3;i<=n;i++){
        p=a.add(b);
        a=b;
        b=p;
      }
    System.out.println(p);
    }
}
}