import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        BigInteger n=input.nextBigInteger();
        BigInteger k=input.nextBigInteger();
        BigInteger s=BigInteger.valueOf(1);
        BigInteger f=BigInteger.valueOf(10);
        BigInteger e=BigInteger.valueOf(18);

        BigInteger max=f.pow(e.intValue());
        int i=0;
        while(n.intValue()>0)
        {
            s=s.multiply(n);
            n=n.subtract(k);
            if(s.compareTo(max)==1)
            {
                i=1;
                System.out.println("overflow");
                break;
            }
        }
        if(i!=1)
            System.out.println(s);
    }
}