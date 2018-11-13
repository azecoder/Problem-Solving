#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int MAX = 1001;
const int MAXINT = 1000000000;

int n;
int used[MAX];
vvii G(MAX);
vi D(MAX, MAXINT);

void Dijkstra(int s)
{
   set<ii> Q;
   D[s] = 0;
   Q.insert(ii(0,s));

   while(!Q.empty())
   {
       ii top = *Q.begin();
       Q.erase(Q.begin());
       int v = top.second;
       used[v] = 1;
       for (vii::const_iterator it = G[v].begin(); it != G[v].end(); it++)
       {
           int v2 = it->first;
           int cost = it->second;
           if (D[v2] > D[v] + cost && !used[v2])
           {
               D[v2] = D[v] + cost;
               Q.insert(ii(D[v2], v2));
           }
       }
   }
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

   ios_base::sync_with_stdio(false);
   int m, s, t = 0;
   scanf("%d %d %d", &m, &s, &t);

   int arr[m + 2][m + 2];
   for(int i = 1; i <= m; i++)
   {
       for(int j = 1; j <= m; j++)
       {
           scanf("%d", &arr[i][j]);
           if(arr[i][j] != 0 && arr[i][j] != -1)
           {
               G[i - 1].push_back(ii(j - 1, arr[i][j]));
           }
       }
   }


   Dijkstra(s - 1);

   printf("%d\n", D[t - 1] == MAXINT ? -1 : D[t - 1]);

   return 0;
} 