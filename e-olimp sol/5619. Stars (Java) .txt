import java.util.*;

public class Main{
   
   private static final int MAX = 32006;
   private static final int c[] = new int[MAX];
   
   public static void main(String args[]){
       Scanner input = new Scanner(System.in);
       int level[] = new int[MAX];
       
       int n = input.nextInt();
       for(int i = 0; i < n; i++){
           int x = input.nextInt();
           int y = input.nextInt();
           
           x++;
           level[ sum(x) ]++;
           update(x, 1);
       }
       for(int i = 0; i < n; i++)
           System.out.println(level[i]);
   }

   private static int sum(int i) {
        int s = 0;
        while(i > 0){
           s += c[i];
           i -= low(i);
        }
        return s;
   }
   
   private static int low(int x){
       return x&(-x);
   }

   private static void update(int pos, int val) {
       while(pos <= MAX){
           c[pos] += val;
           pos += low(pos);
       }        
   }
}