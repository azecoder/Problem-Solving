#include <cstdlib>
#include <iostream>

using namespace std;

int a[20][20],i,j,n,m;

int main(int argc, char *argv[])
{
  cin>>n>>m;
  for(i=0; i<n; i++)
  for(j=0; j<m; j++)
     cin>>a[i][j];
  
  for(i=1; i<n; i++)
     a[i][0]=a[i][0]+a[i-1][0];
  
  for(j=1; j<m; j++)
     a[0][j]=a[0][j]+a[0][j-1];
  
  for(i=1; i<n; i++)
  for(j=1; j<m; j++)
     a[i][j]=a[i][j]+min(a[i-1][j],a[i][j-1]);
  
  cout<<a[n-1][m-1]<<endl;
  

  return EXIT_SUCCESS;
}