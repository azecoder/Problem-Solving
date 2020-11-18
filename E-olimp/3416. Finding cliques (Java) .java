import java.util.HashMap;
import java.util.Scanner;

public class Main {

   /*
    * @author: Tabriz
    */
   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       Main mn = new Main();
       int n,m, temp1 , temp2;
       
       
       
       while((n = in.nextInt())!=0 && (m = in.nextInt())!=0) {
           boolean isYes = false;
           int[][] mas = new int[100][100];
           for(int i=0;i<m;i++){
               temp1 = in.nextInt()-1;
               temp2 = in.nextInt()-1;
               mas[temp1][temp2] = 1;
               mas[temp2][temp1] = 1;
               
           }
           outer:
           for(int i=0;i<n;i++)
               for(int j=0;j<n ;j++)
                   if(i==j) continue;
                   else
                       for(int k=0;k<n;k++)
                           if(k==j || i==k) continue;
                           else
                               for(int l=0;l<n;l++)
                                   if(l==i || l== j || l==k) continue;
                                   else{
                                   
                                       if(isYes=mn.check(i, j, k, l, mas)){
                                           System.out.println("YES");
                                           break outer;
                                       }
                                       
                                   }
           
           
           if(!isYes)
               System.out.println("NO");
           
           
       }
       
   }
       
   
   boolean check(int i , int j , int k, int l, int[][] mas){
       if(mas[i][j]==0) return false;
       if(mas[i][k]==0) return false;
       if(mas[i][l]==0) return false;
       
       if(mas[j][i]==0) return false;
       if(mas[j][l]==0) return false;
       if(mas[j][k]==0) return false;
       
       if(mas[k][i]==0) return false;
       if(mas[k][j]==0) return false;
       if(mas[k][l]==0) return false;
       
       if(mas[l][j]==0) return false;
       if(mas[l][i]==0) return false;
       if(mas[l][k]==0) return false;
       
       return true;
   }
   
   

} 