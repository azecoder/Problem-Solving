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

#define faster_io ios_base::sync_with_stdio(false);cin.tie();
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define for_each(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define rall(a) (a).rbegin(), (a).rend()
#define sq(a) (a * a)
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define MX 1002

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;


using namespace std;



vl g[512];
ll dist[512], parent[512];


ll bfs(ll st, ll &ret)
{

    clr(dist, 0);

    dist[st] = 1, parent[st] = -1;

    queue<int> Q;
    Q.push(st);

    while(!Q.empty()) {

        int u = Q.front();
        Q.pop();

        repv(i, g[u]) {

            int v = g[u][i];
            if(v == parent[u])	continue;

            if(dist[v] == 0) {

                dist[v] = dist[u] + 1;
                parent[v] = u;
                Q.push(v);

            } else {

                ret = min(ret, dist[u] + dist[v] - 1);

            }
        }
    }
}




ll testcase, cases = 0;
ll n, m, x, y;

int main()
{

    faster_io;

    cin >> testcase;

    while(testcase--) {

        cin >> n >> m;

        rep(i, 0, n - 1) {

            g[i].clear();

        }

        while(m--) {

            cin >> x >> y;
            g[x].pb(y);
            g[y].pb(x);

        }


        ll ret = n + 1;

        rep(i, 0, n - 1) {

            bfs(i, ret);

        }

        cout << "Case " << ++cases << ": ";

        if(ret == n + 1) {

            cout << "impossible";

        } else {

            cout << ret;

        }

        cout << "\n";

    }

    return 0;
}

















