import java.util.HashMap;
import java.util.Scanner;

/*
 * @author Tabriz
 */
public class Main {

  
   final static int MOD = 1000000007;
   HashMap<String, Long> map = new HashMap<String, Long>();
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      Main mn = new Main();
      int x,y;
      x = in.nextInt();
      y = in.nextInt();
     
      System.out.println(mn.nese(x, y));
     
     
     
   }
     
   
   long nese(int x , int y){
       if(map.containsKey(x+" "+y))
           return map.get(x+" "+y);
       if(x < y)      return 0l;
       if(y == 0)     return 1;
       
       if(x<y || (x*y)%2!=0){
           map.put(x+" "+y,(long)0);
           return 0;
       }
       map.put(x+" "+y,(nese(x-1, y)%MOD+ nese(x, y-1)%MOD)%MOD);
       return   map.get(x+" "+y);
 
   }
   
} 