#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <vector>

#define MAXN 5000006
#define pb push_back
#define mk make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,short> pr;

vector<pr > num[MAXN];
bool prime[MAXN];
unsigned long long ans[MAXN];
unsigned long long sum[MAXN];

void init() {
  double sq = sqrt(MAXN);
  for (int i = 2; i <= (int)sq; i++) {
      if (!prime[i]) {
          ans[i] = i + 1;
          for (int j = i*i; j < MAXN; j += i) {
              prime[j] = true;
              int k = j , v = 1;
              unsigned long long s = 1;
              while (k % i == 0) {
                  k /= i;
                  v *= i;
                  s += v;
              }
              ans[j] *= s;
          }
          for (int j = i + i; j < i*i; j += i) {
              ans[j] *= ans[i];
          }
      }
  }
  for (int i = sq + 1; i < MAXN; i++) {
      if (!prime[i]) {
          ans[i] = i + 1;
          for (int j = i + i; j < MAXN; j += i)
              ans[j] *= ans[i];
      }
  }
}

long long f(int n) {
  long long sum = 0;
  for (int i = 1; i <= n; i++)
      if (n % i == 0)
          sum += i;
  return sum;
}

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  ios_base::sync_with_stdio(false);

  for (int i = 1; i < MAXN; i++)
      ans[i] = 1;

  init();
  sum[0] = 0;
  for (int i = 1; i < MAXN; i++) {
      sum[i] = sum[i - 1] + (unsigned long long)ans[i];
  }
  int l , r;
  while (cin >> l >> r) {
      if (l > r) swap(l , r);
      cout << sum[r] - sum[l - 1] << endl;
  }

  return 0;
} 