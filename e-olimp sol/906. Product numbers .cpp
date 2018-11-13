#include <stdio.h>
#include <stdlib.h>
int n,a,b,c;
int main(int argc, char *argv[])
{
  scanf("%d", &n);

a=n/100;
b=n%10;
c=(n%100)/10;

  printf("%d\n",(a*b*c));

return 0;
}