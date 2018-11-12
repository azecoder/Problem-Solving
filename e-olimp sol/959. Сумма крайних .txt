#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int a;
   scanf("%d",&a);

int b,c,d,e;
   b=a/1000;
   c=a/100%10;
   d=a/10%10;
   e=a%10;

int s;
   s=b+e;

   printf("%d\n",s);

 
 return 0;
}