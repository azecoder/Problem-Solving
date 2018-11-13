#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000000000

int n,i,j,m,s,k,q;
char a[300];


int main(int argc, char *argv[])
{
 gets(a);

  n=strlen(a);

for(i=n-1; i>=0; i--)
   {
     if(a[i]!=' ')
       {
          k=i;  break;
       }
   }


for(j=0; j<=k; j++)
   if(a[j]!=' ')
      goto m;

m:
for(i=j; i<=k; i++)
   {
     if(a[i]!=' ')
        printf("%c", a[i]);

     else
       {
         if(a[i-1]!=' ')
           printf("%c", a[i]);
       }
   }

printf("\n");



return 0;
}