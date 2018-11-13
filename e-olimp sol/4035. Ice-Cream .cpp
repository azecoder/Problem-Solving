#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int a[10001];
int n , k;

   int f(int w , int e)
   {
       int i = 0;
       while (i < n && e > 0)
       {
           int p = a[i] + w;
           i = lower_bound(a , a + n , p) - a;
           e--;
       }
       if (e != 0) return false;
       return true;
   }

int main()
{
  int l = 0, r = 0;
 
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i] , r = max(r , a[i]);
 
  int cvb;
  while (l <= r) {
      int mid = l + (r - l) / 2;
      if (f(mid,k)) cvb = mid , l = mid + 1;
      else r = mid - 1;
  }
  cout << cvb << endl;
 
  return 0;
} 