import java.util.Scanner;

public class Main {

 public static void main(String[] args) {
     Scanner input = new Scanner (System.in);
     
     int n = input.nextInt();
     
     if(n < 2)
         System.out.println("Ooops!");
     else{
         int a[] = new int [100001];
         
         for(int i = 0; i < n; i++)
             a[i] = input.nextInt();
         int maxx = a[0];
         int minn = a[0];
         for(int i = 0; i < n; i++){
             if(a[i] > maxx) maxx = a[i];
             if(a[i] < minn) minn = a[i];
         }
         System.out.println(minn +" "+ maxx);
     }
 }
}