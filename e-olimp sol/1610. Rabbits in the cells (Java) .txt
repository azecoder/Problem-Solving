import java.util.*;
public class Main{
   
   public static void main(String[] args){
       
       Scanner input = new Scanner (System.in);
       int cells = input.nextInt();
       int hares = input.nextInt();
       
       int k = 0;
       if((hares % cells) != 0)    k = 1;
       int maxx = hares / cells + k;
       System.out.println(maxx);
   }   
}