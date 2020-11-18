#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  long long a[200001],b[2001],i,j,m,n,k,say=0;
     cin>>n>>m;
  for(i=1; i<=n*m; i++)   cin>>a[i];
  cin>>k;
  for(i=1; i<=k; i++)   cin>>b[i];
  
  sort(a,a+1+m*n);
  sort(b,b+1+k);
  for(i=1; i<=k; i++)
  {
      for(j=1; j<=n*m; j++)
      if(b[i]<=a[j] && a[j]>=0)
      {
          say++;
          a[j]=-1;
          break;
      }
  }
  cout<<say<<endl;
  
  
  return EXIT_SUCCESS;
}