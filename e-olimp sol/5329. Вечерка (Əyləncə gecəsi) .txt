#include <iostream>
#include <cstdio>
#include <cstdlib>

#define LL long long

using namespace std;

LL n, k;
LL a[509][509];
LL mod = 9929;

int main()
{
  cin >> n >> k;
  a[0][0] = 1;
  for (LL i = 1; i <= n; i++) {
      a[i][0] = 1;
      for (LL j = 1; j <= k; j++) {
          a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
          a[i][j] %= mod;
      }
  }
  cout << a[n][k] << endl;
  return 0;
}