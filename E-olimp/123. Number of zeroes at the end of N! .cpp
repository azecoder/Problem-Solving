import java.util.*;

class Main {

   public static void main(String[] args) {
     
     Scanner input = new Scanner (System.in);
     long numb = input.nextLong();
     
     long sum = 0;
     long i = 1;
     while(Math.pow(5, i) <= numb){
          sum += numb / Math.pow(5, i);
          i += 1;
     }
     System.out.println(sum);
 }
}