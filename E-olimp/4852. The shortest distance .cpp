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

#define faster_io() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define fore(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define MX 100009

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;

const ll inf = (2.e18 + 1) * 1ll;


ll vertices, city_a;
vl g[MX];
ll dist[MX];


void clear_array(ll arr[], ll val) {

    rep(i, 1, vertices) {

        arr[i] = val;

    }

}


void check_shortest_path(ll src) {

    clear_array(dist, inf);

    dist[src] = 0;

    queue < ll > Q;
    Q.push(src);
    while(!Q.empty()) {

        ll from  = Q.front();
        Q.pop();

        repv(i, g[from]) {

            ll to = g[from][i];

            if(dist[to] > dist[from] + 1) {

                dist[to] = dist[from] + 1;

                Q.push(to);

            }

        }

    }

}


int main()
{
    faster_io();

    cin >> vertices >> city_a;
    rep(i, 1, vertices) {

        rep(j, 1, vertices) {

            ll x; cin >> x;
            if(x == 1) {

                g[i].pb(j);

            }

        }

    }

    check_shortest_path(city_a);


    rep(i, 1, vertices - 1) {

        cout << ( (dist[i] == inf) ? -1 : dist[i] ) << " ";

    }
    cout << ( (dist[vertices] == inf) ? -1 : dist[vertices] ) << "\n";

    return 0;
}