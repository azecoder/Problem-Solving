#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;
int main(int argc, char *argv[])
{
   scanf("%d",&a);
if(a<0) a=-a;

int b,c,d;
  b=a/100;
  c=a/10%10;
  d=a%10;

int cem,hasil;
  cem=d+c+b;
  hasil=d*c*b;

int ferq;
  ferq=hasil-cem;
    printf("%d\n",ferq);


 return 0;
}