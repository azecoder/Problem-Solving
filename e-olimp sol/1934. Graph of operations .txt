#include <iostream>
#include <algorithm>
#include <vector>
#include <memory.h>
#include <stdio.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 2010
#define PB push_back

using namespace std;

typedef vector < int > VI;

vector < int > g[MAXN] , rev[MAXN];
int used[MAXN] , list[MAXN] , color[MAXN];
int n , m , l = 0 , colors = 1;

void dfs(int v)
{
   used[v] = 1;
   for (int i = 0; i < (int)g[v].size(); i++)
   {
       int to = g[v][i];
       if (!used[to]) dfs(to);
   }
   list[l++] = v;
}

void _dfs(int v , int c)
{
   color[v] = c;
   for (int i = 0; i < (int)rev[v].size(); i++)
   {
       int to = rev[v][i];
       if (!color[to]) _dfs(to , c);
   }
}

int main()
{
   cin >> n >> m;
   for (int i = 0; i < m; i++)
   {
       int u , v , r;
       string s;
           cin >> u >> v >> r >> s;
       
       u--; v--;
       if (s == "OR")
       {
           if (r)
           {
               g[2 * u + 1].PB(2 * v);
               g[2 * v + 1].PB(2 * u);
               rev[2 * v].PB(2 * u + 1);
               rev[2 * u].PB(2 * v + 1);
           }
           else
           {
               g[2 * u].PB(2 * u + 1);
               g[2 * v].PB(2 * v + 1);
               rev[2 * v + 1].PB(2 * v);
               rev[2 * u + 1].PB(2 * u);
           }
       }
       else if (s == "AND")
       {
           if (r)
           {
               g[2 * u + 1].PB(2 * u);
               g[2 * v + 1].PB(2 * v);
               rev[2 * v].PB(2 * v + 1);
               rev[2 * u].PB(2 * u + 1);
           }
           else
           {
               g[2 * u].PB(2 * v + 1);
               g[2 * v].PB(2 * u + 1);
               rev[2 * v + 1].PB(2 * u);
               rev[2 * u + 1].PB(2 * v);
           }
       }
       else if (s == "XOR")
       {
           if (r)
           {
               g[2 * u + 1].PB(2 * v);
               g[2 * v + 1].PB(2 * u);
               g[2 * u].PB(2 * v + 1);
               g[2 * v].PB(2 * u + 1);
               rev[2 * v].PB(2 * u + 1);
               rev[2 * v + 1].PB(2 * u);
               rev[2 * u].PB(2 * v + 1);
               rev[2 * u + 1].PB(2 * v);
           }
           else
           {
               g[2 * u].PB(2 * v);
               g[2 * v].PB(2 * u);
               g[2 * u + 1].PB(2 * v + 1);
               g[2 * v + 1].PB(2 * u + 1);
               rev[2 * v].PB(2 * u);
               rev[2 * v + 1].PB(2 * u + 1);
               rev[2 * u].PB(2 * v);
               rev[2 * u + 1].PB(2 * v + 1);
           }
       }
   }
   for (int i = 0; i < 2 * n; i++)     if (!used[i])           dfs(i);
   for (int i = l - 1; i >= 0; i--)    if (!color[list[i]])    _dfs(list[i] , colors++);
   for (int i = 0; i < 2 * n; i += 2)
   {
       if (color[i] == color[i + 1])
       {
           cout << "NO" << endl;
           return 0;
       }
   }
   cout << "YES" << endl;
   
   return 0;
} 