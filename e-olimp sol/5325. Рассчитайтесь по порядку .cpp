#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long long i,n;
  scanf("%lld",&n);

  for(i=1; i<n; i++)
      printf("%lld ",i);
  printf("%lld\n",n);




return 0;
}