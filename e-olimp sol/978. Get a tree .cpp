#include <stdio.h>
#include <stdlib.h>

int n, m, i, a[101][101], v, x, y;
int used[101];

void dfs(int v)
{
   used[v]=1;
   for(int i=1; i<=n; i++)
    {
     if(a[v][i]==1 && used[i]==0)
      {
       printf("%d %d", v, i);
        printf("\n");
        dfs(i);
      }
   }
}
int main()
{
   scanf("%d%d", &n,&m);

   for(i=1; i<=m; i++)
   {
       scanf("%d%d", &x,&y);
       a[x][y]=1,  a[y][x]=1;
   }
   dfs(1);

 
 return 0;
}