import java.util.*;

public class Main {
   
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
     
       
       int n = input.nextInt();
       double avarage;
       double sum = 0;
       double scores[] = new double [10001];
       for(int i = 0; i < n; i ++){
           scores[i] = input.nextDouble();
           sum += scores[i];
       }
       avarage = sum / n;
       
       int count = 0;
       for(int i = 0; i < n; i++)
           if(scores[i] > avarage)
               count ++;
       System.out.println(count);
   }
}