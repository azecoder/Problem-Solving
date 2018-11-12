#include <stdio.h>
#include <stdlib.h>

unsigned long long l,r,x[10001][10001],i,j,n,m,cem,a[10001],b[10001];

int main(int argc, char *argv[])
{
  scanf("%llu%llu",&n,&m);
  for(i=1; i<=m; i++)
  {
      scanf("%llu%llu",&l,&r);
      x[l][r]=1;
  }

  for(i=1; i<=n; i++)
  {
      cem=0;

      for(j=1; j<=n; j++)
      cem=cem+x[i][j];

      a[i]=cem;
  }

  for(j=1; j<=n; j++)
  {
      cem=0;

      for(i=1; i<=n; i++)
      cem=cem+x[i][j];

      b[j]=cem;
  }

  for(i=1; i<=n; i++)
  printf("%llu\n",(b[i]+a[i]));



return 0;
}