import java.util.HashMap;
import java.util.Scanner;
public class Main {

   /**
    * @param args
    */
   private static int l=0;
   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       Main mn = new Main();
       long t,a,b;
       long temp;
       t = in.nextInt();
       while(t--!=0){
           a = in.nextLong();
           b = in.nextLong();
           if(mn.gcd(a, b)!=1 || ((a==0 && b!=1) ||( b==0 && a!=1) ))
               System.out.println("No Solution");
           else
               if( ( b==1) )
                       System.out.println(0+" "+1);
               else
                   if(( b==0 && a==1) )
                       System.out.println(1+" "+0);
                   else
                       if(a==b && a==1)
                           System.out.println(0+" "+1);
                       
                   
           else
               if(a>=b)
                   System.out.println((-((temp=mn.name(a, b, 1))*b-1)/a)+" "+temp);
               else
                   System.out.println((temp=mn.name(b, a, 0))+" "+(temp*a-1)/(-b));
           
       }
       
           
       }
       
   

   long gcd(long a, long b){
       return b!=0?gcd(b,a%b):a;
       
   }
   long name(long a, long b, long k){
       
       long temp, temp1;
       
       if(b==1 && k%2==0) return 1;
       if(b==1 && k%2==1) return -(a-b);
       temp1 = name(b, a%b,k+1);
       temp = temp1 *a;
   //    System.out.println(temp+" "+a+" "+temp1);
       return -(long)((long)(temp)-1)/b;
       
   }
   
     
}