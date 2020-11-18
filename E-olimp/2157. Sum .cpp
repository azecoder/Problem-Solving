#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359

#define SIZE 1010



#define MOD 1000000000;

vector<vector<pair<int,int> > > g;

int n, res;

int dfs(int v, int p = -1)

{

    int cnt = 1, c;

    for(int i = 0; i < g[v].size(); i++)

    {

        int to = g[v][i].first;

        int w = g[v][i].second;

        if (to != p)

        {

            c = dfs(to, v);

            res = (res + 1LL * c * (n - c) * w) % MOD;

            cnt += c;

        }

    }

    return cnt;

}

int i;

int main()
{

    scanf("%d",&n);

    g.resize(n+1);

    for(i = 1; i < n; i++)

    {

        int u, v, d;

        scanf("%d %d %d",&u,&v,&d);

        g[u].push_back(make_pair(v,d));

        g[v].push_back(make_pair(u,d));

    }

    dfs(1);

    printf("%lld\n",res);

    return 0;

}


