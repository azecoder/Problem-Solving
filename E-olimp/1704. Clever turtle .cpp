#include <cstdlib>
#include <iostream>

using namespace std;
long long a[31][31];
int main(int argc, char *argv[])
{
  long n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)a[i][m-1]=1;
  for(int i=0;i<m;i++)a[0][i]=1;

  for(int i=1;i<n;i++)
      for(int j=m-2;j>=0;j--)
          a[i][j]=a[i-1][j]+a[i][j+1];

  cout<<a[n-1][0]<<endl;
      return EXIT_SUCCESS;
} 