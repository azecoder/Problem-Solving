import java.math.*;
import java.util.*;

public class Main {
  public static void main(String args[]){
     Scanner input=new Scanner(System.in);

     BigInteger a=input.nextBigInteger();
     BigInteger b=input.nextBigInteger();

     BigInteger t=a.pow(b.intValue());
     System.out.println(t);
  }
}