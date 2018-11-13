import java.util.LinkedList;
import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       while (in.hasNext()) {
           LinkedList<Integer> res = new LinkedList<Integer>();
           int a = in.nextInt();
           int b = in.nextInt();
           do {
               res.add(a / b);
               int temp = b;
               a %= b;
               b = a;
               a = temp;
           } while (a != 1 && b != 0);
           String out = "[";
           int count = 0;
           for (int i : res) {
               out += i;
               if (count < res.size() - 1) {
                   if (count == 0)
                       out += ';';
                   else
                       out += ',';
               }
               count++;
           }
           out += ']';
           System.out.println(out);
       }
   }
}