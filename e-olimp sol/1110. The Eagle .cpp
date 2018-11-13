#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;

#define MAX 210

vector<pair<int,string> > v;

int m[MAX][MAX], used[MAX];

vector<int> g;

int k;

void LIS(vector<pair<int,string> > &v)
{

    int i, pos;

    vector<int> lis(v.size(),0);

    g.resize(v.size());

    for (k = i = 0; i < v.size(); i++)
    {

        pos = lower_bound(lis.begin(),lis.begin()+k,v[i].first) - lis.begin();

        lis[pos] = v[i].first;

        if (pos == k) k++;

        g[i] = pos;

    }

}


int n;

int aug(int x,int t,int CurFlow)
{

    if (x == t) return CurFlow;

    if (used[x]++) return 0;


    for (int Flow, y = 0; y <= 2 * n + 1; y++)
    {

        if (m[x][y] > 0 && (Flow = aug(y,t,min(CurFlow,m[x][y]))))
        {

            m[x][y] -= Flow;
            m[y][x] += Flow;

            return Flow;

        }

    }

    return 0;

}

int main(void)
{

    scanf("%d\n",&n);

    v.clear();
    g.clear();

    for(int i = 0; i < n; i++)
    {

        string s;
        int t;

        cin >> s >> t;

        v.push_back(make_pair(t,(string)s));

    }



    LIS(v);

    memset(m,0,sizeof(m));


    for(int i = 1; i <= n; i++) m[2*i][2*i-1] = 1;

    for(int i = 1; i <= g.size(); i++)

        if (g[i-1] == 0) m[2*i-1][2*n+1] = 1;


    for(int i = 1; i <= g.size(); i++)

        if (g[i-1] == k - 1) m[0][2*i] = 1;


    for(int i = 0; i < g.size(); i++)

        for(int j = i + 1; j < g.size(); j++)

            if ((v[i].first < v[j].first) && (g[i] == g[j] - 1))

                m[2*(j+1)-1][2*(i+1)] = 1;



    int MaxFlow = 0, flow;

    do
    {

        memset(used,0,sizeof(used));

    }
    while ((flow = aug(0,2*n+1,0x7FFFFFFF)) && (MaxFlow += flow));


    printf("%d\n",k*MaxFlow);

    return 0;

}


