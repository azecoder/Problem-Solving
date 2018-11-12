#include <iostream>

using namespace std;
int n, m, i, s, j, k, a[1001], f, res;

int main()
{
  cin>>n>>m;

  for( i = 1; i <= n; i++ )
       cin>>a[i];
  
  sort(a+1,a+n+1);
  k = a[n];
  for( i = k; i > 0; i-- )
  {
       s = 0;
       for( j = 1; j <= n; j++ )
            s = s + a[j]/i;
       if( s >= m )
       {
           res = i;
           break;
       }
  }
  cout<<res<<endl;

  return EXIT_SUCCESS;
}