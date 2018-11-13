#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>

#define MAXN 4000001
#define MAXT 20001

using namespace std;

typedef long long ll;

int fi[MAXN];
ll dp[MAXN] , d[MAXN];
int ans[MAXT] , q[MAXT];
int l = 0;

void init(int n) {
for (int i = 0; i <= n; i++) fi[i] = i;
for (int i = 2; i <= n; i += 2) fi[i] /= 2;
for (int i = 3; i < n; i += 2) {
    if (fi[i] == i) {
        for (int j = i; j <= n; j += i) {
            fi[j] -= fi[j] / i;
        }
    }
}
}

void sieve(int n) {
ll sq = sqrt(1.0 * n);
for (int i = 2; i <= sq; i++) {
    dp[i * i] += i * fi[i];
    for (int j = i * i + i , k = i + 1; j <= n; j += i , k++)
        dp[j] += i * fi[k] + k * fi[i];
}
}

int main()
{

int n , mxn = 0;
while (scanf("%d",&n) == 1 && n != 0) {
    q[l++] = n;
    mxn = n > mxn ? n : mxn;
}

init(mxn);
for (int i = 1; i <= mxn; i++) dp[i] = fi[i];
sieve(mxn);
for (int i = 3; i <= mxn; i++)
    dp[i] += dp[i - 1];

for (int i = 0; i < l; i++)
    printf("%I64d\n",dp[q[i]]);

return 0;
} 