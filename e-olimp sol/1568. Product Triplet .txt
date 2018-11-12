#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



//#define MAX 1000001

ll f(ll x0, ll miny, ll maxy, ll minz, ll maxz)
{

    minz = max(minz, x0 * x0 + 1);

    if (maxz < minz) return 0;

    miny = max(miny, (minz + x0 - 1) / x0);

    maxy = min(maxy, maxz / x0);

    return max(0LL, maxy - miny + 1);

}



ll countTriplets(int minx, int maxx, int miny, int maxy, int minz, int maxz)
{

    ll x0, y0, i, res = 0;

    for(ll x0 = minx; (x0 <= maxx) && (x0 * x0 < maxz); x0++)
    {

        res += f(x0,miny,maxy,minz,maxz);

    }
    for(ll y0 = miny; (y0 <= maxy) && (y0 * y0 < maxz); y0++)
    {

        res += f(y0,minx,maxx,minz,maxz);

    }
    for(ll i = max(minx,miny); (i <= min(maxx,maxy)) && (i * i <= maxz); i++)
    {

        if (minz <= i * i) res ++;

    }

    return res;

}

ll minx, maxx, miny, maxy, minz, maxz;

int main()
{

    while(cin >> minx >> maxx >> miny >> maxy >> minz >> maxz)

    {

        ll res = countTriplets(minx,maxx,miny,maxy,minz,maxz);

        cout << res << "\n";

    }

    return 0;

}


