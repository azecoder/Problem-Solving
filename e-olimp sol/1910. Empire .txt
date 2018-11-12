#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 100010
#define pb push_back

using namespace std;

vector<int> g[MAXN] , rev[MAXN];
int used[MAXN] , list[MAXN] , color[MAXN];
int u[2*MAXN] , v[2*MAXN];
int n , m , l = 0 , colors = 1;
int a[MAXN] , ans = 0;

void dfs(int v) {
 used[v] = 1;
 for (int i = 0; i < (int)g[v].size(); i++) {
     int to = g[v][i];
     if (!used[to]) dfs(to);
 }
 list[l++] = v;
}

void _dfs(int v , int c) {
 color[v] = c;
 for (int i = 0; i < (int)rev[v].size(); i++) {
     int to = rev[v][i];
     if (!color[to]) _dfs(to , c);
 }
}

int main()
{    
 scanf("%d %d",&n,&m);
 for (int i = 0; i < m; i++) {
     scanf("%d %d",&u[i],&v[i]);
     g[u[i]].pb(v[i]);
     rev[v[i]].pb(u[i]);
 }
 for (int i = 1; i <= n; i++)
     if (!used[i])
         dfs(i);
 for (int i = l - 1; i >= 0; i--)
     if (!color[list[i]])
         _dfs(list[i] , colors++);
 for (int i = 0; i < m; i++) {
     if (color[u[i]] != color[v[i]] && v[i] != 1 && color[v[i]] != color[1])
         a[color[v[i]]] = 1;
 }
 for (int i = 1; i < colors; i++)
     ans = a[i] ? ans : ans + 1;
     
 printf("%d\n",ans-1);
 

 return 0;
} 