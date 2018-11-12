#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[10001], n, i, j, l, k, c[10001];
int main(int argc, char *argv[])
{

  scanf("%d", &n);
    for(i=0;i<n;i++)
  scanf("%d", &a[i]);
     k=0;
     l=0;
   for(i=0;i<n;i++)
     {
         l=0;
       for(j=0;j<n;j++)
         {
           if(a[i]!=a[j] && a[i]%a[j]==0)
             {
               l++;
               break;
             }
         }
       if(l==0)
        {c[k]=a[i];
         k++;
        }
     }
      printf("%d", c[0]);
     for(i=1;i<k;i++)
       printf("% d", c[i]);
   printf("\n");


 return 0;
}