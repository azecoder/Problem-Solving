#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char a[10001],b[10001];
int c[20005],i,j,q,l,t,m,n;


int main(int argc, char *argv[])
{
   scanf("%s%s", a, b);

    if(a[0]=='0' || b[0]=='0')
       printf("0\n");

    else
      {
        strrev(a);
        strrev(b);
        n=strlen(a);
        m=strlen(b);


   for(i=0; i<n; i++)
{
   q=0;

   for(j=0; j<m; j++)
{

   t=(int)(a[i]-48)*(int)(b[j]-48)+q+c[i+j];
    q=t/10;
    c[i+j]=t%10;
}
c[i+j]=q;
}


i=n+m-1;
if(c[i]==0)
i--;
         l=i+1;
         for(i=l-1;i>=0;i--)

    printf("%d",c[i]);
     printf("\n");
}


 return 0;
}


- - - - - - - - - - - - - - - - - - - - JAVA CODE - - - - - - - - - - - - - - - - - - - - 

import java.math.BigInteger;
import java.util.Scanner;

/*
* author: Tarbiz Hajiyev
*/
public class Main {

  public static void main(String[] args) {
     
      Scanner input = new Scanner(System.in);
     
      BigInteger A = input.nextBigInteger();
      BigInteger B = input.nextBigInteger();
     
      System.out.println(A.multiply(B));
  }
} 