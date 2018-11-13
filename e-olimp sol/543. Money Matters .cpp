#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

#define LL __int64
#define MAXN 10005
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define mp make_pair

using namespace std;

class UFDS
{
private:
   vector<int> p, rank, setSize;
   int numSets;
public:
   UFDS(int N)
   {
       numSets = N;
       rank.assign(N, 0);
       p.assign(N, 0);
       for (int i = 0; i < N; i++)
           p[i] = i;
       setSize.assign(N, 1);
   }
   int findSet(int i)
   {
       return (p[i] == i) ? i : p[i] = findSet(p[i]);
   }
   bool isSameSet(int i, int j)
   {
       return findSet(i) == findSet(j);
   }
   void unionSet(int i, int j)
   {
       if (!isSameSet(i, j))
       {
           int x = findSet(i), y = findSet(j);
           if (rank[x] > rank[y])
           {
               p[y] = x;
               setSize[findSet(x)] += setSize[findSet(y)];
           }
           else
           {
               p[x] = y;
               if (rank[x] == rank[y])
                   rank[y]++;
               setSize[findSet(y)] += setSize[findSet(x)];
           }
           numSets--;
       }
   }
   int numDisjointSets()
   {
       return numSets;
   }
};

int money[MAXN];
map<int,int> calc;

int main()
{
   ios_base::sync_with_stdio(false);
   int n, m, tc;
   int u, v;


   cin >> n >> m;
   UFDS uf(n);

   for(int i=0; i<n; i++)
       cin >> money[i];

   for (int i = 0; i < m; i++)
   {
       cin >> u >> v;
       uf.unionSet(u, v);
   }

   for(int i=0; i<n; i++)
   {
       if(calc.count(uf.findSet(i))==0)
       {
           calc[uf.findSet(i)] = money[i];
       }
       else
       {
           calc[uf.findSet(i)] += money[i];
       }
   }

   bool can = true;
   map<int,int>::iterator it;
   for(it = calc.begin(); it != calc.end(); it++)
   {
       if(it->second != 0) can = false;
   }

   if(can) printf("POSSIBLE\n");
   else printf("IMPOSSIBLE\n");


   return 0;
}