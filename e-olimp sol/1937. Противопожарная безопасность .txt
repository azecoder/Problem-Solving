#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359

#define SIZE 1010




vector<vector<int> > g, gr;

vector<int> used, top, color, repr;





void dfs1(int v)

{

    int i, to;

    used[v] = 1;

    for(i = 0; i < g[v].size(); i++)

    {

        to = g[v][i];

        if (!used[to]) dfs1(to);

    }

    top.push_back(v);

}




void dfs2(int v, int c)

{

    int i, to;

    color[v] = c;

    repr[c] = v;

    for(i = 0; i < gr[v].size(); i++)

    {

        to = gr[v][i];

        if (color[to] == -1) dfs2(to,c);

    }

}

int n, m;
int a, b, c;
int i, j;
int v;

int main()
{
    scanf("%d %d",&n,&m);

    g.assign(n+1,vector<int>());
    gr.assign(n+1,vector<int>());

    for(i = 0; i < m; i++)

    {

        scanf("%d %d",&a,&b);

        g[a].push_back(b);
        gr[b].push_back(a);

    }



    used.assign(n+1,0);

    for(i = 1; i <= n; i++)

        if (!used[i]) dfs1(i);


    color.assign(n+1,-1);

    repr.assign(n+1,-1);

    for(c = 0, i = 1; i <= n; i++)

    {

        v = top[n-i];

        if (color[v] == -1) dfs2(v,c++);

    }


    used.assign(c,1);

    for(i = 1; i < g.size(); i++)

        for(j = 0; j < g[i].size(); j++)

        {

            int to = g[i][j];



            if (color[i] != color[to]) used[color[i]] = 0;

        }




    for(c = i = 0; i < used.size(); i++)

        if (used[i]) c++;

    printf("%d\n",c);


    int flag;
    for(flag = i = 0; i < used.size(); i++)

        if (used[i])

        {

            if (flag) printf(" ");

            printf("%d",repr[i]);

            flag = 1;

        }

    printf("\n");

    return 0;

}


