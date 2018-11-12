import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Scanner;


public class Main {

  /*
   * author : Tabriz Hajiyev
   */
  public static void main(String[] args) throws FileNotFoundException {
      Main mn = new Main();
      PrintWriter pw;
      Scanner in;
      int a,b,n,m;
      long has, has2;
      int[] mas = new int[1000001];
      in = new Scanner(System.in);
     
      n = in.nextInt();
      for(int i=1;i<=n;i++){
         
          mas[i] = in.nextInt();
          if(mas[i]==0)
              mas[i]=-2;
      }
          System.out.println(mn.run(mas,(int) n));     

  }
 
  int run(int[] mas, int n){
      int[] newmas = new int[1000001];
     
      int l=0, temp=-1;
      newmas[0] = -1;
      for(int i=1;i<=n;i++){
 
          temp = BinarySearch(newmas, 1, l, mas[i]);

       
         
     while(mas[i]== newmas[temp+1]) temp++;
         
         
              if(  mas[i]<newmas[temp] && temp!=0){
               
                  temp--;
              }
             
              if( l==temp || mas[i]<=newmas[temp+1])
                  newmas[temp+1] = mas[i];
              l = Math.max(l, temp+1);
           
      }
      return l;
     
  }
 
  int BinarySearch(int[] mas, int lo, int hi, int k){
 
     
      if(lo>hi && lo>1) return lo;
      if(lo>hi ) return 0;
      if(lo==hi ) return lo;
      int mid = (lo+hi)/2;
      if(mas[mid]==k)
          return mid;
      else
          if(mas[mid]<k)
              return BinarySearch(mas, mid+1, hi, k);
          else
              return BinarySearch(mas, lo, mid-1, k);
     
  }
 
} 