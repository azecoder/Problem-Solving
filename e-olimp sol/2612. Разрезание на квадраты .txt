import java.util.Scanner;

public class Main{
   public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int a = input.nextInt();
       int b = input.nextInt();
       int count = 0;
       while(a%b != 0 && b%a != 0){
           if(a > b) a -= b;
           else      b -= a;
           count ++;
       }
     // if a > b  ->  b/a = 0 && a/b != 0
     // if b > a  ->  a/b = 0 && b/a != 0  
       if(a == b)
           System.out.println(count+a/b+b/a-1);
       else
           System.out.println(count+a/b+b/a);            
   }
}