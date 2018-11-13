#include <stdio.h>
#include <stdlib.h>
#define MAX 101

int n,i;
long a[MAX];

int main(int argc, char *argv[])
{
   scanf("%d",&n);

for(i=0; i<n; i++)
   scanf("%ld",&a[i]);

for(i=0; i<n; i++)
  {
   if(a[i]>=0)
      a[i]+=2;
  }

for(i=0; i<n-1; i++)
    printf("%ld ",a[i]);

   printf("%ld\n",a[n-1]);

 
 return 0;
}