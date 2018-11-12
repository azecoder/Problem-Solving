import java.util.*;

public class Main {
 
 public static void main(String[] args) {
     
     Scanner input = new Scanner (System.in);
     
     int a = input.nextInt();
     int b = input.nextInt();
     int c;
     if((a + b) == 100)
         c = a + b - 1;
     else
         c = a + b + 1;
     System.out.println(c);
 }
}