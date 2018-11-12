#include <stdio.h>

int i,j,n,m,x,y,a[1001][1001],say1,say=0;

int main()
{
  scanf("%d%d",&n,&m);
  for(i=1; i<=m; i++)
  {
      scanf("%d%d",&x,&y);
      a[x][y]++;
      a[y][x]++;
  }

  for(i=1; i<=n; i++)
  {
      say1=0;

      for(j=1; j<=n; j++)
          if(a[i][j]==1)
              say1++;

      if(say1==1)
          say++;
  }

  printf("%d\n",say);


  return 0;
}