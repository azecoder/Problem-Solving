#include <stdio.h>
#include <stdlib.h>

long long a[1001][1001],i,j,n,say;

int main(int argc, char *argv[])
{
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  for(j=1; j<=n; j++)
  scanf("%lld",&a[i][j]);

  for(i=1; i<=n; i++)
  {
      say=0;

      for(j=1; j<=n; j++)
      if(a[i][j]==1)
      say++;

      if(i!=n)
         printf("%lld ",say);
      else
         printf("%lld\n",say);
  }


return 0;
}