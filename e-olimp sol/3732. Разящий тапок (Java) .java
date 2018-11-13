import java.util.*;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       
       int n = input.nextInt();
       
       int sum = 0;
       int fact = 1;
       for(int i = 1; i <= n; i++){
           fact *= i;
           sum += fact;
       }
       System.out.println(sum);
   }
}