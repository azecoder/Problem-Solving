#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001




ll power(ll a, ll k, ll n)
{

    ll res = 1, x = a;

    while(k > 0)
    {

        if (k & 1) res = res * x % n;

        k >>= 1;

        x = x * x % n;

    }

    return 1ll * res;

}

ll a, p;
ll res;

int main()
{

    while(cin >> a >> p, a + p > 0)
    {

        a = a % p;

        if (!a || (a == 1)) res = 1;

        else res = power(a,(p - 1) / 2,p);

        if (res == 1) printf("Yes\n");

        else printf("No\n");

    }

    return 0;

}


