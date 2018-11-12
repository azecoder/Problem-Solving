import java.util.*;

/*
* @author Tabriz
*/

public class Main {

   static String s1="b",s2="a",s;
   static int n,l;
   static long m;
   static long fib[]=new long[50];
   public static void main(String[] args) {

       Scanner in= new Scanner(System.in);

       n=in.nextInt();
       m=in.nextLong();
       l=in.nextInt();
       fib[1]=1;
       fib[2]=1;
       for(int i=3;i<41;i++)
           fib[i]=fib[i-1]+fib[i-2];
       find(n,m,l);

       System.out.println();           
       
   }
   static void find(int n,long m, int l){
       if(l==0 || m==fib[n]+1) return;
       System.out.print(findChar(n, m));
       find(n,m+1,l-1);
   }
   static char findChar(int n, long m){
       if(n==1)
           return 'b';
       if(n==2)
           return 'a';     
       if(m<=fib[n-1])
           return findChar(n-1,m);
       return findChar(n-2,m-fib[n-1]);
   }
}