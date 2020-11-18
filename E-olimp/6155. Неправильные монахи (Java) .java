import java.util.*;
import java.math.*;
public class Main {
 public static void main(String[] args){
     Scanner input = new Scanner(System.in);
     int n = input.nextInt();
     BigInteger two = new BigInteger("2");
     BigInteger pow = (two.pow(n)).subtract(BigInteger.ONE);
     System.out.println(pow);
 }
}