#include <stdio.h>
#include <stdlib.h>
#define MAX 1001

long a[MAX],n,i,j,c,k=0;

int main(int argc, char *argv[])
{
 scanf("%ld",&n);

for(i=0; i<n; i++)
 scanf("%ld",&a[i]);

for(j=0; j<n-1; j++)
 for(i=0; i<n-1; i++)
    {
     if(a[i]>a[i+1])
       {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        k++;
       }
    }

printf("%ld\n",k);


return 0;
}