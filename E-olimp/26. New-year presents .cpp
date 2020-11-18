#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct Time
{
  int m , d , c;
};

bool compare(Time a , Time b)
{
  int z = min(a.c , b.c);
  if (a.d == z)
      return false;
  else if (b.m == z)
      return false;
  return true;
}

Time a[305];
int n;

int main()
{
  cin>>n;
  for (int i = 0; i < n; i++) {
      cin>>a[i].m;
      a[i].c = a[i].m;
  }
  for (int i = 0; i < n; i++) {
      cin>>a[i].d;
      a[i].c = min(a[i].c , a[i].d);
  }
  sort(a , a + n , compare);
  int t = a[0].d;
  for (int i = 1; i < n; i++) {
      if (a[i].m >= t) a[i].m -= t , t = 0;
      else t -= a[i].m , a[i].m = 0;
      t += a[i].d;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) ans += a[i].d + a[i].m;
  cout<<ans<<endl;

  return 0;
} 