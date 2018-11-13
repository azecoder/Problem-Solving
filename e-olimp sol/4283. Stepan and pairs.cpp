#include <stdio.h>

long a[1000001],i,n,say;

int main()
{
  scanf("%ld",&n);

  for(i=1; i<=n; i++) say+=n/i;
  printf("%ld\n",say);

  return 0;
}