#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long n,k;

int main(int argc, char *argv[])
{

 scanf("%llu", &n);

if(n==0)     k=1;
if(n==1)     k=2;
while(n>=2)
  { k=3;
    k+=((4+4+2*(n-2-1))*(n-2))/2+1;  break;
  }

 printf("%llu\n", k);


return 0;
}