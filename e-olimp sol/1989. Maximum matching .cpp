#include <cstdio>

#include <vector>

#include <algorithm>

#define MAX 110

using namespace std;

 

vector<vector<int> > g;

vector<int> used, mt, par;

int i, j, ptr;

int n, m, k, a, b, flow;

 

int dfs(int v)

{

  if (used[v]) return 0;

  used[v] = 1;

  for (int i = 0; i < g[v].size(); i++)

  {

    int to = g[v][i];

    if (mt[to] == -1 || dfs(mt[to]))

    {

      mt[to] = v;

      par[v] = 1;

      return 1;

    }

  }

  return 0;

}

 

void AugmentingPath(void)

{

  int i, run;

  mt.assign (m+1, -1);

  par.assign (n+1, -1);

 

  for (run = 1; run; )

  {

    run = 0; used.assign(n+1, 0);

    for (i = 1; i <= n; i++)

      if ((par[i] == -1) && dfs(i)) run = 1;

  }

}

 

int main(void)

{

  scanf("%d %d %d",&n,&m,&k);

  g.resize(n+1);

 

  for(i = 0; i < k; i++)

  {

    scanf("%d %d",&a,&b);

    g[a].push_back(b);

  }

 

  AugmentingPath();

 

  for (flow = 0, i = 1; i <= m; i++)

    if (mt[i] != -1) flow++;

  printf("%d\n",flow);

 

  for (i = 1; i <= m; i++)

    if (mt[i] != -1) printf("%d %d\n",mt[i],i);

  return 0;

}

 