#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
long a[100001], i, n, s;
int main()
{
  cin>>n;
  for( i = 1; i <= n; i++ ){
       cin>>a[i];
       s += a[i];
  }
  cout << -s << endl;

  return EXIT_SUCCESS;
} 