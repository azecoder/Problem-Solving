#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int dp[100][200];
int a[200] , sum[200];
int n , k;

int main()
{
  scanf("%d",&n);
  for (int i = 1; i <= n; i++)
      scanf("%d",a + i);
  scanf("%d",&k);
  reverse(a + 1 , a + n + 1);
  sum[1] = a[1];
  for (int i = 2; i <= n; i++)
      sum[i] = sum[i - 1] + a[i];
  for (int i = 1; i <= k; i++) dp[i][0] = 0;
  for (int i = 1; i <= n; i++) dp[1][i] = sum[i] - dp[1][i - 1];
  for (int i = 2; i <= k; i++) {
      for (int j = i; j <= n; j++) {
          dp[i][j] = (sum[j] - sum[j - i]);
          int mn = -1;
          for (int l = 1; l <= i; l++) {
              mn = mn == -1 ? sum[j - i] - dp[l][j - i] : min(mn, sum[j - i] - dp[l][j - i]);
          }
          dp[i][j] += mn;
      }
  }
  int ans = 0;
  for (int i = 1; i <= k; i++)
      ans = max(ans , dp[i][n]);
  cout << ans << endl;
  return 0;
} 