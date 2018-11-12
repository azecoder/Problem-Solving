import java.util.*;
import java.math.*;

public class Main {
  
  public static void main(String[] args) {
      
      Scanner input = new Scanner (System.in);
      
      int number = input.nextInt();
      BigInteger three = new BigInteger("3");
      System.out.println((three.pow(number)).subtract(BigInteger.ONE));
  }
}