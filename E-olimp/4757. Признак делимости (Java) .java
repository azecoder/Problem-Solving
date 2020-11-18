import java.util.*;
import java.math.*;

public class Main 
{
       public static void main(String[] args) 
       {
                   Scanner scan = new Scanner(System.in);
                String s,t="";
                BigInteger a = new BigInteger("0");
                BigInteger b = new BigInteger("2");
                s=scan.next();int j=0;
                for(int i=0;i<=s.length()-1;i++)
             {
                        j++;t="" + s.charAt(i);
                   a=a.add( b.pow(s.length()-j).abs().multiply(BigInteger.valueOf(Integer.parseInt(t)))      );
             }
 
               if(a.mod(BigInteger.valueOf(15)).equals(BigInteger.valueOf(0)))
             {
                   System.out.println("YES");
             }
             else
                   System.out.println("NO");
       }
}