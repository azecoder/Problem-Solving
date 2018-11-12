#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define len 1001

int x,l;
int n,i,j,k;
char a[len];

int main()
{


   scanf("%d", &x);


for(l=0; l<x; l++)
   {
       scanf("%s", a);

     n=strlen(a);

     for(i=1; i<=n; i++)
        {
           k=1;
           if(n%i==0)
             {
                for(j=i; j<n; j++)
                   {
                      if(a[j]!=a[j%i])
                        {
                          k=0;
                          break;
                        }
                   }
                if(k)
                   {
                     printf("%d", i);
                     if(l!=x-1)
                       {
                         printf("\n\n");
                       }
                     break;
                   }
             }
        }
   }

   printf("\n");


 
 return 0;
}