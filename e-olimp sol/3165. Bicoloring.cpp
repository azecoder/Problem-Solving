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




ll n, m, a, b;
vector < vector < ll > > graph;
vl color;

bool recolor(ll u)
{
    bool ret = true;

    repv(i, graph[u]) {

        if(color[graph[u][i]] != 0 && color[graph[u][i]] == color[u]) {

            return false;

        }
        if(color[graph[u][i]] == 0) {

            color[graph[u][i]] = (color[u] == 1 ? 2 : 1);
            ret = ret & recolor(graph[u][i]);

        }

    }


    return ret;
}


void init()
{

    graph.clear();
    graph.resize(n + 1);
    color.assign(n + 1, 0);

}


int main()
{
    while(cin >> n && n) {

        init();

        cin >> m;

        rep(i, 1, m) {

            cin >> a >> b;

            graph[a].pb(b);
            graph[b].pb(a);

        }

        color[1] = 1;

        printf("%s\n", recolor(1) ? "BICOLOURABLE." : "NOT BICOLOURABLE.");

    }

    return 0;

}
















