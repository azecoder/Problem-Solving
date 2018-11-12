import java.util.Scanner;

public class Main {


  public static void main(String[] args) {
      Scanner input = new Scanner (System.in);
      
      int n = input.nextInt();
      if(n < 4)      
          System.out.println("1");
      else if(n < 10)      
          System.out.println("2");
      else
          System.out.println("3");
  }
}