#include <iostream>

using namespace std;

#define size 10001
int a[size][size],i,j,n,m,x,y;

int main()
{
  cin>>m>>n;
  for(i=1; i<=n; i++)
  {
      cin>>x>>y;
      a[x][i]=1;
      a[y][i]=1;
  }

  for(i=1; i<=m; i++)
  {
      for(j=1; j<n; j++)
          cout<<a[i][j]<<" ";
      cout<<a[i][n]<<endl;
  }

  return 0;
}