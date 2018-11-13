#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;
int main(int argc, char *argv[])
{
   scanf("%d",&a);

int b,c,d;
  b=a/100;
  c=a/10%10;
  d=a%10;

int l;
  l=d*100+c*10+b;

    printf("%d\n",l);

 return 0;
}