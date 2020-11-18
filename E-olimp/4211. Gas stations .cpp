#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int a[100005];
int n , l;
int cvb;

int main()
{    
 
 
  cin >> l >> n;
  for (int i = 0; i < n; i++)    cin >> a[i];

  sort(a , a + n); cvb = a[0];
  for (int i = 0; i < n - 1; i++) cvb = max(cvb , a[i + 1] - a[i]);
  cvb = max(cvb , l - a[n - 1] + a[0]);
 
  printf("%.1lf\n",cvb / 2.0);
 
  return 0;
} 