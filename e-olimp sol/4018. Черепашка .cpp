#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

#define MAXN 100100
#define pb push_back
#define mk make_pair
#define f first
#define s second

using namespace std;

int a[1001][1001];
int n , m;

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  scanf("%d %d",&n,&m);
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          scanf("%d",&a[i][j]);
      }
  }
  for (int i = 1; i < m; i++)
      a[0][i] = a[0][i - 1] + a[0][i];
  for (int i = 1; i < n; i++)
      a[i][0] = a[i - 1][0] + a[i][0];
  for (int i = 1; i < n; i++) {
      for (int j = 1; j < m; j++) {
          a[i][j] = min(a[i][j - 1] , a[i - 1][j]) + a[i][j];
      }
  }
  cout << a[n - 1][m - 1] << endl;

  return 0;
} 