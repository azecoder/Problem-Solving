import java.util.*;
import java.math.*;

public class Main {
  
  public static void main(String[] args) {
      
      Scanner input = new Scanner (System.in);
      
      int number = input.nextInt();
      BigInteger two = new BigInteger("2");
      System.out.println((two.pow(number)).subtract(BigInteger.ONE));
  }
}