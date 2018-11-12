#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[10010], b[10010];
int c[10001], n, m, f, l, i, j, k, q, t;

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
      t=(int)a[i]-48+(int)b[j]-48;

         if(t==2)
         {
             c[k]=q;
             q=1;
         }

         else
         {
             c[k]=t+q;
             q=0;
         }
if(c[k]==2)
{ c[k]=0;
   q=1;
}
     i--;
     j--;
     k++;
     }



           while(i>=0)
       {
             t=(int)a[i]-48;

         if(t==2)
            {
             c[k]=q;
             q=1;
             }
          else
            {
             c[k]=t+q;
             q=0;
             }
if(c[k]==2)
{ c[k]=0;
   q=1;
}
       i--;
       k++;
       }


       while(j>=0)
       {
       t=(int)b[j]-48;
         if(t==2)
            {
             c[k]=q;
             q=1;
             }
         else
            {
             c[k]=t+q;
             q=0;
             }
if(c[k]==2)
{ c[k]=0;
   q=1;
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
     printf("%d", c[k]);
     printf("\n");


return 0;
}