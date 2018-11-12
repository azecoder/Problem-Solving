#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[1000001], b[10000001];
long long c[100000001], n, m, f, l, i, j, k, q, t;
int main(int argc, char *argv[])
{

scanf("%s %s", a, b);

  n=strlen(a);
  m=strlen(b);

   i=n-1;
   j=m-1;
   q=0;

     while(i>=0&&j>=0)
     {
      t=(int)a[i]-48+(int)b[j]-48+q;

         if(t>=10)
         {
             c[k]=t-10;
             q=1;
         }

         else
         {
             c[k]=t;
             q=0;
         }
     i--;
     j--;
     k++;
     }



       while(i>=0)
       {
             t=(int)a[i]-48+q;

         if(t>=10)
            {
             c[k]=t-10;
             q=1;
             }
         else
            {
             c[k]=t;
             q=0;
             }
       i--;
       k++;
       }


       while(j>=0)
       {
       t=(int)b[j]-48+q;
         if(t>=10)
            {
             c[k]=t-10;
             q=1;
             }
         else
            {
             c[k]=t;
             q=0;
             }
       j--;
       k++;
       }
if(q==1)
{c[k]=1;
k++;
}
   l=k;
   for(k=l-1;k>=0;k--)
     printf("%lld", c[k]);
     printf("\n");

return 0;
}