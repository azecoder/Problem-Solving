import java.util.Scanner;


public class Main {
  
  public static void main(String[] args) {
      Scanner input = new Scanner (System.in);
      
      int n = input.nextInt();
      int m = input.nextInt();
      
      if((n%2) == (m%2))
          System.out.println("1");
      else
          System.out.println("0");
   }
}