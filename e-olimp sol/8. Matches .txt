#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long n, a, s;
int main(int argc, char *argv[])
{
 scanf("%ld", &a);

  n=sqrt(a);

 s=4+(n-1)*2*3+(n-1)*(n-1)*2;

 a=a-n*n;

 if(a)
  {
    if(a>n) s=s+2*(3)+(a-2)*2;
    else s=s+1*(3)+(a-1)*2;
  }
 printf("%ld", s);
   printf("\n");

 
 return 0;
}