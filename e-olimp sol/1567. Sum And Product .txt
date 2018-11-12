#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001




ll smallestSet(ll s, ll p)
{

    ll n;

    if (s == p) return 1;

    for(n = 2; n <= s; n++)

        if (pow(1.0 * s / n, 1.0 * n) >= p) return n;

    return -1;

}

ll s, p;

int main()
{

    while(cin >> s >> p)
    {

        ll res = smallestSet(s,p);

        cout << res << "\n";

    }

    return 0;

}


