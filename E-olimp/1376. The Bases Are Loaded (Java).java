import java.math.*;
import java.util.*;
import java.io.*;

public class Main{
   
       public static BigInteger num = new BigInteger("0");
 
       public static void main(String[] args)
       throws IOException
       {
          BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
          Scanner sc = new Scanner(br);

          int originalBase, newBase, offset;
          String input;

          while(sc.hasNext()){

             originalBase = sc.nextInt();
             newBase = sc.nextInt();

             input = sc.next();

             offset = 0;
             for(int i=0;i<input.length();i++){
                if(input.charAt(i) != '0') break;
                else offset++;
             }
             input = input.substring(offset);

             if( input.equals("") ) input = "0" ;
             
             int k = 0;
             try{
                num = new BigInteger(input, originalBase);
             }
             catch(NumberFormatException e){
                System.err.println(input + " is an illegal base " + originalBase + " number");
                k = 1;
             }
             
             String ans = num.toString(newBase);
             ans = ans.toUpperCase();
             if(k == 0)
               System.out.println(input + " base " + originalBase + " = " + ans + " base " + newBase);
          }
   }   
}