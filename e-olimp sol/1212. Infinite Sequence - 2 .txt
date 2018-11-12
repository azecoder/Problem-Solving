#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;


#define MAX 5000000

ll m[MAX];



ll calc(ll n, ll p, ll q, ll x, ll y)
{

    ll temp;

    if (n <= 0) return 1;

    if ((n < MAX) && m[n]) return m[n];

    temp = calc(n/p-x,p,q,x,y) + calc(n/q-y,p,q,x,y);

    if (n < MAX) m[n] = temp;

    return temp;

}

ll n, p, q, x, y;

int main(void)
{

    cin >> n >> p >> q >> x >> y;

    cout << calc(n,p,q,x,y) << "\n";

    return 0;

}


