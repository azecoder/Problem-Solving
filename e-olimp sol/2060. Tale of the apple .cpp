#include <cstdlib>
#include <iostream>

using namespace std;

#define ulli unsigned long long int

int main(int argc, char *argv[])
{
  ulli i, a[62], n;
  cin >> n;
  
  a[1] = 4;
  for( i = 2; i <= n; i ++ ) a[i] = 2 * a[i-1] + 2;
  cout << a[n] << endl;

  
  return EXIT_SUCCESS;
}