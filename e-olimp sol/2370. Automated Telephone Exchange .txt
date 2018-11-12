#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,i,j,say=0;
  scanf("%d",&a);

  for(i=0; i<=99; i++)
  for(j=0; j<=99; j++)
     if(a-i-j==0)   say++;

  printf("%d\n",say);

  return 0;
}