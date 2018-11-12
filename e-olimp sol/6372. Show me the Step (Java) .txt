import java.util.*;
import java.math.*;
import java.io.*;
public class Main {
  public static void main(String[] args) {
           Scanner scan = new Scanner(System.in);
      int test = scan.nextInt();
      String hecne = scan.nextLine();
      for(int k = 0; k < test; k++){
      String t = scan.nextLine();
      String[] s = t.split(" ");
      Vector <String>v = new Vector();
      for(int i = 0; i < s.length; i++){
          v.add(s[i]);
      }
      String ans = "";
      for(int i = 0; i < v.size(); i++){
          if(v.get(i).equals("*")){
              ans += " *";
              int a = Integer.parseInt(v.get(i - 1)), b = Integer.parseInt(v.get(i + 1));
              v.remove(i - 1); v.remove(i - 1); v.remove(i - 1);
              v.add(i - 1, (a * b + ""));
              i--;
          }else if(v.get(i).equals("/")){
              ans += " /";
              int a = Integer.parseInt(v.get(i - 1)), b = Integer.parseInt(v.get(i + 1));
              v.remove(i - 1); v.remove(i - 1); v.remove(i - 1);
              v.add(i - 1, (a / b + ""));
              i--;
          }
      }
      for(int i = 0; i < v.size(); i++){
          if(v.get(i).equals("+")){
              ans += " +";
              int a = Integer.parseInt(v.get(i - 1)), b = Integer.parseInt(v.get(i + 1));
              v.remove(i - 1); v.remove(i - 1); v.remove(i - 1);
              v.add(i - 1, (a + b + ""));
              i--;
          }else if(v.get(i).equals("-")){
              ans += " -";
              int a = Integer.parseInt(v.get(i - 1)), b = Integer.parseInt(v.get(i + 1));
              v.remove(i - 1); v.remove(i - 1); v.remove(i - 1);
              v.add(i - 1, (a - b + ""));
              i--;
          }
      }
          System.out.println("Case #" + (k + 1) + ":" + ans + " " + v.get(0));
      }

  }

}