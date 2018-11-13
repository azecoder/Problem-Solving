import java.util.*;

public class Main {

   /**
    * @ author Tabriz
    */
   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int n,m;
       while(in.hasNext()){
           n = in.nextInt();
           m = in.nextInt();
           
           System.out.println(m/(n+1));   
       }  
   }
} 