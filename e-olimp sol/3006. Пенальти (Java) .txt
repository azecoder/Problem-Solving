import java.math.*;
import java.util.*;

public class Main {



public static void main(String[] args) {
Scanner scan = new Scanner(System.in);

int[] a = new int[11];

for(int i=1;i<=10;i++){
   a[i]=scan.nextInt();
}




int k11=0,k21=0,k10=0,k20=0,u=0; boolean p=true;
for(int i=1;i<=10;i++){
   u++;
   if( (k11> (k21+(5-k21-k20) )) )break;
   if(k21>( k11 + (5-k11-k10) ))break;
   if(i%2!=0 ){
       if(a[i]==1)k11++;
       else k10++;
       
       
       
       
   }else {
       
       if(a[i]==1)k21++;
       else k20++;
       
       
       
   }

}
 if(k11+k21+k10+k20!=10)
System.out.println(u-1);
 else System.out.println(u);
System.out.println(k11 + ":" + k21);

}
}