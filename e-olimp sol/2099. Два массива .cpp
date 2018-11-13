#include <cstdlib>
#include <iostream>

using namespace std;

#define ll long long
#define size 100001
ll a[size], b[size], c[size];
ll i, j, flag, num = 1, n, m;

int main(int argc, char *argv[])
{
  cin >> n;
  for( i = 1; i <= n; i ++ ) cin >> a[i];
  cin >> m;
  for( j = 1; j <= m; j ++ ) cin >> b[j];

  for( i = 1; i <= n; i ++ )
  {
      flag = 0;
      
      for( j = 1; j <= m; j ++ )
      if( a[i] == b[j] )
      {
          flag = 1; break;
      }
      if( flag == 0 )
      {
          c[num] = a[i]; num ++;
      }
  }
  cout << num - 1 << endl;
  for( i = 1; i < num - 1; i ++ )
  cout << c[i] << " ";
  cout << c[num-1] << endl;
  

  return EXIT_SUCCESS;
}