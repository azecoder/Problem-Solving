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

int n;
double a = 0.0, b = 0.0;

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  ios_base::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++) {
      double x , y;
      cin >> x >> y;
      if (i % 2 == 0) {
          if (n % 2) a += 2 * x;
          else a += (-1) * (2 * x);
      }
      else {
          if (n % 2) a += (-1) * (2 * x);
          else a += 2 * x;
      }

      if (i % 2 == 0) {
          if (n % 2) b += 2 * y;
          else b += (-1) * (2 * y);
      }
      else {
          if (n % 2) b += (-1) * (2 * y);
          else b += 2 * y;
      }
  }
  if ((a == 0 && b == 0) && (n % 2 == 0)) {
      cout << 0 << endl;
  }
  else if (n % 2) cout << a / 2.0 << " " << b / 2.0 << endl;
  else cout << -1 << endl;

  return 0;
} 