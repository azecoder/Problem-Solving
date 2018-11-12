#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359

#define SIZE 1010




vector<vector<int> > g;

vector<int> used, d, f;

int sdf = 0;

void dfs(int v)

{

    used[v] = 1;
    d[v] = sdf++;

    for(int i = 0; i < g[v].size(); i++)

    {

        int to = g[v][i];

        if (!used[to]) dfs(to);

    }

    f[v] = sdf++;

}

int is_Parent(int a, int b)

{

    return (d[a] < d[b]) && (f[b] < f[a]);

}

int n;

int i;

int main()
{

    scanf("%d",&n);

    g.resize(n+1);
    used.resize(n+1);

    d.resize(n+1);
    f.resize(n+1);

    int root;

    for(i = 1; i <= n; i++)

    {
        int a;
        scanf("%d",&a);

        if(!a) root = i;
        else g[a].push_back(i);

    }



    dfs(root);

    int m;

    scanf("%d",&m);

    int a, b;

    for(i = 0; i < m; i++)

    {

        scanf("%d %d",&a,&b);

        printf("%d\n",is_Parent(a,b));

    }

    return 0;

}


