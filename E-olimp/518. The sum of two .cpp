#include <stdio.h>
#include <stdlib.h>

long n;
long a[1000001],b[1000001],i;
long sum[1000001];
int main(int argc, char *argv[])
{
    scanf("%ld",&n);

  for(i=0; i<n; i++)
    scanf("%ld %ld",&a[i],&b[i]);

  for(i=0; i<n; i++)
   { sum[i]=a[i]+b[i];
       printf("%ld\n",sum[i]);
        }


 return 0;
}