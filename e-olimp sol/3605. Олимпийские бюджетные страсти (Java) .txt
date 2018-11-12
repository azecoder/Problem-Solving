import java.util.*;

public class Main {

  public static void main(String[] args) {
      Scanner input = new Scanner (System.in);
      int n = input.nextInt();
      
      if(n == 0) System.out.println("1");
      else{
           int i = 0;
           while(n != 0){
               i++;
               n /= 2;
           }
           System.out.println(i);
      }
 }
}