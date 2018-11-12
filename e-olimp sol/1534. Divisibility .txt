#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 10000000


int l, r, n, a[1000001];

long long gcd(ll a, ll b) {

    if(b == 0) {

        return a;

    } else {

        return gcd(b, a%b);

    }

}

int f(int N, int *a)
{

    int i, j, bits, temp, res = 0;

    long long lcm;

    for(int i = 1; i < (1<<n); i++)

    {

        lcm = 1;
        bits = 0;

        for(int j = 0; j < n; j++)

            if (i & (1 << j))

            {

                bits++;

                long long temp = gcd(lcm,a[j]);

                lcm = lcm / temp * a[j];

                if (lcm > N) break;

            }

        if (bits % 2) res += N / lcm;
        else res -= N / lcm;

    }

    return res;

}

int main()
{

    while(scanf("%d %d",&l,&r) == 2)

    {

        scanf("%d",&n);

        for(int i = 0; i < n; i++) scanf("%d",&a[i]);

        int res = f(r,a) - f(l - 1,a);

        printf("%d\n",res);

    }

    return 0;

}


