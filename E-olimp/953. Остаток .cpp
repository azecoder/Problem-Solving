#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
int a;
    scanf("%d",&a);
if(a<0)  a=-a;

int b,c,d;
     b=a/100;
     c=a/10%10;
     d=a%10;

int x;
     x=d%b;

  printf("%d\n",x);



 return 0;
}