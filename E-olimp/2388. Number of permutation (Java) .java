import java.util.Scanner;

public class Main {

   /**
    * @param args
    */
   public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int n, mas[]= new int[13], k_mas[] = new int[13],cur_n;
       long ans = 0;
       n = in.nextInt();
       Main mn = new Main();
       
//        System.out.println(mn.fukt(12));
       
       for(int i=0;i<n;i++){
           mas[i] = in.nextInt();
           k_mas[i+1]=i;
       }
       cur_n = n;
       for(int i=0;i<n;i++){
           if(k_mas[mas[i]]>0){
               
               ans += mn.fukt(cur_n-1)*k_mas[mas[i]] ;
               
               
               
               }
           
           for(int j=mas[i]+1;j<=n;j++){
               k_mas[j]--;
       //        System.out.println(ans+" ans"+ cur_n);
               
           }
           cur_n--;
           
           
       }
       System.out.println(ans+1);
   
   }
   
   long fukt(int n){
       long f=1;
       for(int i=1;i<=n;i++)
           f*=i;
       return f;
   }

} 