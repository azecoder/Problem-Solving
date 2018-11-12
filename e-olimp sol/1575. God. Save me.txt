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



ll t, n;


int main()
{
    faster_io;

    cin >> t;

    rep(w, 1, t) {

        cin >> n;

        double a = 1, b = 0, x, y;

        rev(i, n, 1) {

            cin >> x >> y;

            if(x > 0.0) {

                b += (1.0 * x * y);

            } else {

                b += (-1.0 * x * y);
                a -= y;

            }

        }

        if(a < 1e-10) {

            cout << "Case " << w << ": God! Save me\n";

        } else {

            cout.precision(2);
            cout << "Case " << w << ": " << fixed << 1.0 * b / a << "\n";

        }
    }

    return 0;
}

















