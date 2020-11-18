#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <vector>

#define MAXN 5000005
#define pb push_back
#define mk make_pair
#define f first
#define s second

using namespace std;

unsigned long long a[10001];
unsigned long long n , t;

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  ios_base::sync_with_stdio(false);

  cin >> t;
  while (t--) {
      cin >> n;
      if (n <= 1) {
          cout << 0 << endl;
      }
      else {
      unsigned long long s = 2 , k = 1;
      int l = 0;
      while (s <= n) {
          a[l++] = s;
          s += k;
          k *= 2;
      }
      cout << l << " ";
      for (int i = 0; i < l - 1; i++)
          cout << a[i] << " ";
      cout << a[l - 1] << endl;
      }
  }

  return 0;
} 