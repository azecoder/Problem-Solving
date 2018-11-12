import java.util.*;

public class Main {
   
   public static final int MAX_N = 100;
   public static final int MAX_M = 2000;
   public static final int MAX_R = 100;
   public static final int MAX_W = 10000;
   
  public static void main(String[] args) {
      Scanner input = new Scanner (System.in);
//***INPUT
      int num_space = input.nextInt();
      assert(1 <= num_space && num_space <= MAX_N);
      int num_cars = input.nextInt();
      assert(1 <= num_cars && num_cars <= MAX_M);
      
      boolean occupied[] = new boolean [num_space];
      int rate[] = new int [num_space];
      for(int i = 0; i < num_space; i++){
          rate[i] = input.nextInt();
          assert(1 <= rate[i] && rate[i] <= MAX_R);
          occupied[i] = false;
      }

      int weight[] = new int [num_cars];       
      int space [] = new int [num_cars];
      for(int i = 0; i < num_cars; i++){
          weight[i] = input.nextInt();
          assert(1 <= weight[i] && weight[i] <= MAX_W);
          space[i] = -1;
      }
      
      int firstSpace = 0;
//***DEQUE
      Deque <Integer> myDeque = new ArrayDeque <Integer> ();
      int revenue = 0;
      for(int i= 0; i < 2*num_cars; i++){
          int x = input.nextInt();
          assert(-num_cars <= x && x <= num_cars);
          assert(space[Math.abs(x) - 1] >= -1);
          if(x > 0){
              x--;
              myDeque.addLast(x);
          }
          else{
              x = -1 - x;
              assert(space[x] >= 0);
              int spot = space[x];
              occupied[spot] = false;
              space[x] = -2;
              if(spot < firstSpace)
                  firstSpace = spot;
          }
          while(firstSpace < num_space && !myDeque.isEmpty()){
              assert(occupied[firstSpace] == false);
              revenue += weight[myDeque.peekFirst()] * rate[firstSpace];
              occupied[firstSpace] = true;
              space[myDeque.peekFirst()] = firstSpace;
              myDeque.removeFirst();
              while(firstSpace < num_space && occupied[firstSpace])
                  firstSpace++;
          }
      }
      System.out.println(revenue);
  }
}