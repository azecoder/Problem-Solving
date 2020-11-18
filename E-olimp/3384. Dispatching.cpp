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
#define MX 100004

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;


using namespace std;



ll L[MX],R[MX],V[MX],D[MX],Le[MX],C[MX],cnt[MX],n,m;
ll sum[MX],ret;
vl g[MX];


ll Merge(ll x, ll y)
{
    if(!x && !y) return x;//xy;

    if(V[x] < V[y])
    {

        swap(x, y);

    }

    R[x] = Merge(R[x], y);

    if(D[L[x]] < D[R[x]])
    {

        swap(L[x], R[x]);

    }

    D[x] = D[R[x]] + 1;
    sum[x] = sum[L[x]] + sum[R[x]] + C[x];
    cnt[x] = cnt[L[x]] + cnt[R[x]] + 1;

    return x;
}


ll pop(ll root)
{

    ll newRoot = Merge(L[root], R[root]);

    L[root] = R[root] = D[root] = 0;

    return newRoot;

}


ll dfs(ll u)
{

    ll root = u;
    cnt[u] = 1;
    V[u] = sum[u] = C[u];

    revv(i, g[u])
    {

        root = Merge(root,dfs(g[u][i]));

    }

    while(sum[root] > m)
    {

        root = pop(root);

    }

    ret = getmax(ret, 1ll * cnt[root] * Le[u]);

    return root;
}

int main()
{

    scanf("%d%d",&n,&m);
    for(int i = 1,B; i <= n; ++i)
    {

        scanf("%d%d%d",&B,C+i,Le+i);
        g[B].pb(i);

    }

    dfs(1);

    printf("%lld\n",ret);

    return 0;
}

















