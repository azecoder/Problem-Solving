 import java.util.*;


/*
* @author Tabriz
*/
public class Main {
 
  public static void main(String[] args) {

     Scanner in = new Scanner(System.in);
     int[] mas = new int[2001];
     int[] mas2 = new int[2001];
     int n=in.nextInt();
   
     for(int i=1;i<=n;i++){
         mas[i] = in.nextInt();
         mas2[i]=mas[i]+mas2[i-1];  
     }
     int min=9999999;
     for(int i=1;i<=n;i++)
         for(int j=i;j<=n;j++)
             if(i!=j){
                  if(min>(mas2[j]-mas2[i-1]))
                      min = (mas2[j]-mas2[i-1]);
             }else{
                 if(min>mas[i])
                      min = (mas[i]);
             }
   System.out.println(min);
  }

}
Internet portal organizational methods of remote programming competiti