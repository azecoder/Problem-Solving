#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long a,b;
long i,s,f=1;
int main(int argc, char *argv[])
{
 scanf("%ld%ld",&b,&a);

 if(a<(b-a))s=a;
 else       s=b-a;

for(i=1; i<=s; i++)
  f=f*(b-i+1)/i;

  printf("%ld\n",f);

 
 return 0;
}