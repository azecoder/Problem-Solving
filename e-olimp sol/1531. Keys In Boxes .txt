#include <set>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define LL long long
using namespace std;
LL gcd(LL a, LL b)
{
    return b?gcd(b,a%b):a;
}
void getAllKeys(int n, int m, LL &a, LL &b)
{
    LL i, k, s[21][21];
    LL d;
    memset(s,0,sizeof(s));
    s[0][0] = 1;
    for(i = 1; i <= n; i++)
        for(k = 1; k <= n; k++)
            s[i][k] = s[i-1][k-1] + (i-1) * s[i-1][k];

    for (a = 0, i = 1; i <= m; i++) a += s[n][i];
    for(b = i = 1; i <= n; i++) b *= i;
    d = gcd(a,b);
    a /= d;
    b /= d;
}
int n, m;
LL a, b;
int main(int argc, char *argv[])
{
    while(scanf("%d %d",&n,&m) == 2)
    {
        getAllKeys(n,m,a,b);
        printf("%lld/%lld\n",a,b);
    }
    return 0;
}
