import java.util.HashMap;
import java.util.Scanner;

public class Main {

   /**
    * @author Tabriz
    */
   static HashMap<String, Integer> map = new HashMap<String, Integer>();
   public static void main(String[] args) {
       int n,m;
       Scanner in = new Scanner(System.in);
       Main mn = new Main();
       while(in.hasNext()){
           m = in.nextInt();
           n     = in.nextInt();
           if(m==0)
               System.out.println(n+1);
           if(m==1)
               System.out.println(2+(n+3)-3);
           if(m==2)
               System.out.println(2*(n+3)-3);
           if(m==3)
               System.out.println((int)(Math.pow(2.0, (double)(n+3))-3));
       }
   }
   int fun(int m, int n){
       if(map.containsKey(m+" "+n)){
           return map.get(m+" "+n);
       }
       if(m==0 ){
           map.put(m+" "+n, n+1);
           return n+1;
       }
       else
           if(m>0 && n==0){
               map.put(m+" "+n, fun(m-1,1));
               return map.get(m+" "+n);
           }
           else{
               map.put(m+" "+n, fun(m-1, fun(m, n-1)));
               return  map.get(m+" "+n);
           }
   }
} 