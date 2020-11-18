import java.util.*;
import java.math.*;

public class Main {

   public static void main(String[] args){
       Scanner input = new Scanner (System.in);
       int len_cap = input.nextInt();
       int len_num = input.nextInt();
       BigInteger numerals = new BigInteger ("10");
       BigInteger capitals = new BigInteger ("26");
       
       BigInteger count = (numerals.pow(len_num)).multiply(capitals.pow(len_cap));
       System.out.println(count);
   }
}