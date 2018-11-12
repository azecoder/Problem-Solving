import java.util.*;

public class Main {
  
  public static void main(String[] args) {
      
      Scanner input = new Scanner (System.in);
      
      int n = input.nextInt();
      int m = input.nextInt();
      int a1 = input.nextInt();        int b1 = input.nextInt();
      int a2 = input.nextInt();        int b2 = input.nextInt();
      int a3 = input.nextInt();        int b3 = input.nextInt();
    
          int qx = a1 + a2;       int qy = b1 + b2;
          int wx = a1 + a3;       int wy = b1 + b3;
          int ex = a2 + a3;       int ey = b2 + b3;
          int rx = a1 + a2 +a3;   int ry = b1 + b2 + b3;
          
          if((qx <= m && qy >= n) || (wx <= m && wy >= n) || (ex <= m && ey >= n) || (rx <= m && ry >= n)
                  || (a1 <= m && b1 >= n) || (a2 <= m && b2 >= n) || (a3 <= m && b3 >= n))
              System.out.println("YES");
          else
              System.out.println("NO");
  }
}