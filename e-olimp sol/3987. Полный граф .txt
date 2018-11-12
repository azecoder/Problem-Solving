#include <stdio.h>
#include <stdlib.h>

using namespace std;

int a[101][101],n,m,i,j,x,y,say;

int main()
{
  scanf("%d%d",&n,&m);

  for(i=1; i<=m; i++)
  {
      scanf("%d%d",&x,&y);

      a[x][y]=1;
      a[y][x]=1;
  }

  for(i=1; i<=n; i++)
      for(j=1; j<=n; j++)
          if(i==j && a[i][j]==1)
          {
              printf("NO\n");
              return 0;
          }
          else if(i!=j && a[i][j]==0)
          {
              printf("NO\n");
              return 0;
          }

  printf("YES\n");

  return 0;
}