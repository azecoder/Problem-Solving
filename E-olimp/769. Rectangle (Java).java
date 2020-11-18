import java.util.*;

public class Main {

   public static void main(String[] args) {        
       Scanner input = new Scanner (System.in);
//***INPUT        
       long A_x = input.nextLong();    long A_y = input.nextLong();
       long B_x = input.nextLong();    long B_y = input.nextLong();
       long C_x = input.nextLong();    long C_y = input.nextLong();
       
           if((A_x == B_x) && (A_y == C_y))
               System.out.println(C_x + " " + B_y);         
       else if((A_x == B_x) && (B_y == C_y))
               System.out.println(C_x + " " + A_y);        
       else if((B_x == C_x) && (A_y == B_y))
               System.out.println(A_x + " " + C_y);        
       else if((B_x == C_x) && (A_y == C_y))
               System.out.println(A_x + " " + B_y);
   }
}