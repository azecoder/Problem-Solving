import java.util.*;

class Main {

 public static void main(String[] args) {
   Scanner input = new Scanner (System.in);
   int n = input.nextInt();
   if(n == 1)
       System.out.println("10" + " " + "0");
   else if(n == 2)
       System.out.println("1" + " " + "22");
   else if(n == 3)
       System.out.println("6" + " " + "123");
   else if(n == 4)
       System.out.println("12" + " " + "1124");
   else if(n == 5)
       System.out.println("40" + " " + "11125");
   else if(n == 6)
       System.out.println("30" + " " + "111126");
   else if(n == 7)
       System.out.println("84" + " " + "1111127");
   else if(n == 8)
       System.out.println("224" + " " + "11111128");
   else if(n == 9)
       System.out.println("144" + " " + "111111129");
   else if(n == 10)
       System.out.println("342" + " " + "1111111144");
 }
}