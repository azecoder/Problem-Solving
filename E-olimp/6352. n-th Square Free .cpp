#include <iostream>
#include <memory.h>
#include <stdio.h>
#include <math.h>

#define MAXN 60001
#define clr(a) memset(a, 0, sizeof(a))

using namespace std;

typedef long long LL;

int lp[MAXN] , a[MAXN];
LL cvb = 0;

void init() {
  int l = 0;
  for (int i = 2; i < MAXN; i++) {
      if (lp[i] == 0) {
          lp[i] = i;
          a[l++] = i;
      }
      for (int j = 0; j < l && a[j] <= lp[i] && i * a[j] < MAXN; j++)
          lp[i * a[j]] = a[j];
  }
  clr(a);
  a[1] = 1;
  for (int i = 2; i < MAXN; i++) {
      int q = i / lp[i];
      if (q % lp[i] != 0)
          a[i] = -a[q];
  }
}

LL check(int n) {
  LL cvb = 0;
  LL sq = sqrt(1.0 * n);
  for (LL i = 1; i <= sq; i++)
      cvb += a[i] * (n / (i*i));
  return cvb;
}

LL BinarySearch(LL l , LL r , int n) {
  LL mid;
  while (l <= r) {
      mid = (l + r) / 2;
      LL k = check(mid);
      if (k > n) r = mid - 1;
      else if (k < n) l = mid + 1;
      else break;
  }
  LL cvb = mid;
  while (check(cvb - 1) == n) cvb--;
  return cvb;
}

int main()
{
  int t , n;
 
  cin >> t;
  init();
  while (t--) {
      cin >> n;
      cout << BinarySearch(1 , 2000000000 , n) << endl;
  }
 
  return 0;
} 