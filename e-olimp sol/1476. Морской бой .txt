#include <cstdlib>
#include <iostream>

using namespace std;

long long s, i, n, m, a[100001], maz;
int main(int argc, char *argv[])
{
  cin>>n>>m;
  for( i = 1; i <= n; i++ )     cin>>a[i];
  for( i = 1; i <= m; i++ )     s += a[i];
  maz = s;
  for( i = 2; i <= n-m+1; i++ )
  {
       s = s - a[i-1] + a[i+m-1];
       if( maz < s )    maz = s;
  }
  cout<<maz<<endl;
 
  return EXIT_SUCCESS;
}