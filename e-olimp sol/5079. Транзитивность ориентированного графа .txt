#include <iostream>

#define INF 500

using namespace std;

int main()
{
  int i,j,k,n,a[101][101];

  scanf("%d",&n);
  for(i=1; i<=n; i++)
      for(j=1; j<=n; j++)
          scanf("%d",&a[i][j]);

  for(k=1; k<=n; k++)
      for(i=1; i<=n; i++)
          for(j=1; j<=n; j++)
              if(a[i][k]==1 && a[k][j]==1 && a[i][j]==0)
              {
                  printf("NO\n");
                  return 0;
              }

  printf("YES\n");


  return 0;
}