import java.math.BigInteger;
import java.util.Scanner;
public class Main {

public static void main(String[] args) {

Scanner s = new Scanner(System.in);

int n = s.nextInt();
int m = s.nextInt();

BigInteger a = BigInteger.valueOf(2);
BigInteger b = BigInteger.valueOf(2);

a = a.pow(n);
b = b.pow(m);

System.out.println(a.add(b));
}

}