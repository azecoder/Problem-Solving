import java.util.*;

public class Main {

  public static void main(String[] args) {
      Scanner input = new Scanner (System.in);
      
      int a = input.nextInt();    int b = input.nextInt();
      
      if((a % (b + 1)) == 0)    
          System.out.println("0");
      else  
          System.out.println((a % (b + 1)));       
  }    
}