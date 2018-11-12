#include <iostream>
#include <cmath>

using namespace std;

int a[101], b[101], n, k, l, i, j, tests;

int main()
{
  cin >> tests;
  for( j = 1; j <= tests; j++){
  cin >> n;
  for( i = 1; i <= n; i++ )
       cin >> a[i];
  while( n != 2 ){
       k = n;  
       if( n % 2 == 1 ){
           n = n / 2 + 1;
           for( i = 1; i <= n; i++ )
                a[i] += a[k - i + 1];
       }
       else {
           n = n / 2;
           for( i = 1; i <= n; i++ )
                a[i] += a[k - i + 1];
       }  
  }
  if( a[1] > a[2] )
      cout << "Case #" << j << ": Alice" << endl;
  else
      cout << "Case #" << j << ": Bob" << endl;
  }

  return 0;
} 