#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001




void gcdext(ll a,ll b, ll *d, ll *x, ll *y)

{

    ll s;

    if (b == 0)

    {

        *d = a;
        *x = 1;
        *y = 0;

        return;

    }

    gcdext(b,a % b,d,x,y);

    s = *y;

    *y = *x - (a / b) * (*y);

    *x = s;

}


int tests;
ll x, k;
ll q, p;

int n, m;

int main()
{

    scanf("%d",&tests);

    while(tests--)

    {

        scanf("%lld %lld",&x,&k);

        if (x % k == 0)
        {
            p = 0;
            q = k;
        }

        else

        {

            n = (int)floor(1.0 * x / k);
            m = (int)ceil(1.0 * x / k);

            ll g, t, u;

            gcdext(n,m,&g,&t,&u);

            p = t * x;
            q = u * x;

        }

        printf("%lld %lld\n",p,q);

    }

    return 0;

}


