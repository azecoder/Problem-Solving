#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
long i=0;
double l,k;
   scanf("%lf %lf",&l,&k);


m:
   l/=k; i++;

  if(l<=1.0)   printf("%ld",i-1);
  else      goto m;

  printf("\n");

 
 return 0;
}