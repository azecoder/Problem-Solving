#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>

#define MOD 100000000
#define const 40000


using namespace std;

/*
 *@author: Tabriz
 */
typedef __int64 ll;
int p[200000], u[100001], v[100001], n, m, edge[100001], rank[100001], q, idx, e[100001], ans[100001], k, comp;
void link(int x, int y){
   if(rank[x] > rank[y])
       p[y] = x;
   else{
       p[x] = y;
       if(rank[x] == rank[y])
           rank[y]++;    
   }    
}
int find(int x){
   if(x != p[x])
       p[x] = find(p[x]);
   return p[x];
}
void Union(int x, int y){
   if(find(x) == find(y))
       return;
   comp--;
   link(find(x), find(y));    
}
int main()
{
   cin>>n>>m;
   for(int i = 1; i <= n; i++)
       p[i] = i;
   comp = n;
   for(int i = 0; i < m; i++){
       cin>>u[i]>>v[i];
   }
   cin>>q;
   for(int i = 0; i < q; i++){
       cin>>idx;
       edge[idx-1] = 1;
       e[i] = idx-1;
       
   }
   for(int i = 0; i < m; i++){
       if(edge[i] == 0){
           Union(u[i], v[i]);
       }    
   }
   for(int i = q-1; i >= 0; i--){
       ans[i] = comp;
       Union(u[e[i]], v[e[i]]);
           
   }
   for(int i = 0; i < q; i++)
       cout<<ans[i]<<" ";
} 