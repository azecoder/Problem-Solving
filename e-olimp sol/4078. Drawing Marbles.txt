#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <ctime>
/*#include <bits/stdc++.h>*/

#define faster_io ios_base::sync_with_stdio(false); cin.tie();
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define fore(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define sqr(a) (a * a)
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define MX 4010

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;

const ll inf = (2.e18 + 1) * 1ll;


ll num_col, n, col[MX];


double combination(ll a, ll b) {

    if(b > a) {

        return 0;

    }

    if(b * 2 > a) {

        b = a - b;

    }

    if(b == 0) {

        return 1;

    }

    double res = 1.0;

    rep(i, 1, b) {

        res *= (1.0 * (a - b + i));
        res /= i;

    }

    return res;

}



int main()
{
    faster_io;

    while(cin >> num_col >> n) {

        clr(col, 0);
        ll sum = 0;

        rep(i, 1, num_col) {

            cin >> col[i];
            sum += col[i];

        }

        double up = 0.0;

        rep(i, 1, num_col) {

            up += ( combination(col[i], n) );

        }

        double down = combination(sum, n);

        cout.precision(4);
        cout << fixed << 1.0 * up / down << "\n";

    }


    return 0;

}

















