#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <string.h>
#pragma comment(linker, "/STACK:100000000")

#define SIZE 50001
#define f first
#define s second

using namespace std;

typedef pair<int,int> PR;

int parent[SIZE];
int sz[SIZE];
vector<int> myGraph[SIZE];
vector<int> cvb;
PR Arr[2 * SIZE];
int q[3 * SIZE] , w[3 * SIZE];
string str[3 * SIZE];
int n , m , t;

int par(int n)
{
  while (n != parent[n])
  {
      parent[n] = parent[parent[n]];
      n = parent[n];
  }
  return n;
}

void Uni(int x , int y)
{
  int xx = par(x) , yy = par(y);
  if (xx == yy)            return;
  if (sz[xx] < sz[yy])     swap(xx , yy);
  parent[xx] = y;
  sz[yy] += sz[xx];
}

int main()
{
  cin >> n >> m >> t;
  for (int i = 1; i <= n; i++)     parent[i] = i;
  for (int i = 0; i < m; i++)      cin >> Arr[i].f >> Arr[i].s;
  for (int i = 0; i < t; i++)
  {
      cin >> str[i] >> q[i] >> w[i];
      if (str[i] == "cut")
      {
          myGraph[q[i]].push_back(w[i]);
          myGraph[w[i]].push_back(q[i]);
      }
  }
  for (int i = 1; i <= n; i++)
      sort(myGraph[i].begin() , myGraph[i].end());
  for (int i = 0; i < m; i++)
  {
      int p = Arr[i].f , t = Arr[i].s;
      if (binary_search(myGraph[p].begin() , myGraph[p].end() , t)) continue;
      Uni(p , t);
  }
  for (int i = t - 1; i >= 0; i--)
  {
      if (str[i] == "ask")
      {
          if (par(q[i]) == par(w[i]))    cvb.push_back(1);
          else cvb.push_back(0);
      }
      else
          Uni(q[i],w[i]);
  }
  for (int i = (int)cvb.size() - 1; i >= 0; i--)
      if (cvb[i])  cout << "YES" << endl;
      else         cout << "NO" << endl;

  return 0;
} 