#include <stdio.h>
#include <stdlib.h>

int a,b,c;
int main(int argc, char *argv[])
{
  a<=100;
  b<=100;
  c<=100;
scanf("%d%d%d",&a,&b,&c);

   if(a==b&&b==c&&c==a)
printf("1\n");

  else if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a))
printf("2\n");

  else if(a!=b&&b!=c&&c!=a)
printf("3\n");

return 0;
}