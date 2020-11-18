#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int a;
   scanf("%ld",&a);
  if(a<0)  a=-a;

int b,c,d,e;
      b=a/1000;
      c=a/100%10;
      d=a/10%10;
      e=a%10;

int sum,square;
      sum=b+c+d+e;
      square=sum*sum;

    printf("%d\n",square);

 
 return 0;
}