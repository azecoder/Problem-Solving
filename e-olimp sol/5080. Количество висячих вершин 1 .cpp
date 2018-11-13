#include <stdio.h>

long i,j,n,say=0,say1,a[1001][1001];

int main()
{
  scanf("%ld",&n);
  for(i=1; i<=n; i++)
      for(j=1; j<=n; j++)
          scanf("%ld",&a[i][j]);

  for(i=1; i<=n; i++)
  {
      say1=0;

      for(j=1; j<=n; j++)
          if(a[i][j]==1)
              say1++;

      if(say1==1)
          say++;
  }

  printf("%ld\n",say);

  return 0;
}