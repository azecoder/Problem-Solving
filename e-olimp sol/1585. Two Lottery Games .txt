#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359


int Cnk(int k, int n)

{

    long long res = 1;

    if (k > n) return 0;

    if (k > n - k) k = n - k;

    for(int i = 1; i <= k; i++)

        res = res * (n - i + 1) / i;

    return (int)res;

}

int n, m, k;
double res;
int x;

int main()
{

    while(scanf("%d %d %d",&n,&m,&k) == 3)

    {

        for(res = 0.0, x = k; x <= m; x++)

            res += Cnk(x,m) * Cnk(m-x,n-m);

        res = res / Cnk(m,n);

        printf("%.4lf\n",res);

    }

    return 0;

}


