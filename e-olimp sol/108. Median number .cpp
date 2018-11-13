#include <stdio.h>
#include <stdlib.h>


int a,b,c;

int main(int argc, char *argv[])
{

scanf("%d %d %d", &a, &b, &c);

if((a<b && b<c) || (c<b && b<a))
  printf("%d\n", b);

else if((a<c && c<b) || (b<c && c<a))
  printf("%d\n", c);

else if((b<a && a<c) || (c<a && a<b))
  printf("%d\n", a);


return 0;
}