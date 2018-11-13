import java.util.*;

 /*
  * @param args
  */
public class Main {

   static final int MAX = 1000001;
   static int mas[] = new int[MAX], len;
   void prim(){
       for(int i=0;i<MAX;i++)
           mas[i] = 1;
       
       for(int i=2;i<=Math.sqrt((double)MAX);i++)
           if(mas[i]==1)
               for(int j=i;i*j<MAX;j++)
                   mas[i*j]=0;
       
       for(int i=2;i<MAX;i++){
           if(mas[i]==1)
               mas[len++]=i;
           
           
       }
       
   }
   
   
   
   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int n = in.nextInt();
       Main mn = new Main();
       mn.prim();
   //    for(int i=0;i<10;i++)
   //        System.out.println(mas[i]);
       for(int i=0;i<n;i++){
           if(i<n-1){
               if(mn.isEven(in.nextLong()))
                   System.out.print("0 ");
               else
                   System.out.print("1 ");
           }else
           if(mn.isEven(in.nextLong()))
               System.out.println("0");
           else
               System.out.println("1");
           
           
       }
       
       
       
       
   
   }
   Boolean isEven(long n){
       int l=0, num=0;
       
       while(n>1){
           num=0;
           if(n%mas[l]==0)
               while(n%mas[l]==0){
                   n/=mas[l];
                   num++;
               }
           num++;
           if(num%2==0){
               return true;
           }
           l++;
           if(l==len){
               long sq;
               sq = (long)Math.sqrt((double)n);
               if(((long)(sq*sq))==n)
                   return false;
               else
                   return true;
           }
           
           
       }
       return false;
       
   }
    
} 