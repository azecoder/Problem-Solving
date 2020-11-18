#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iostream>

#define MAXN 100100
#define INF 1000001000

using namespace std;

struct Node
{
  int sum , pref , suff , maxx;
};

int a[MAXN];                        
Node st[4 * MAXN];                    
int n , m;                            

Node f(Node l , Node r)
{
  Node res;
  res.sum = l.sum + r.sum;
  res.pref = max(l.pref , l.sum + r.pref);
  res.suff = max(r.suff , r.sum + l.suff);
  res.maxx = max(max(l.maxx , r.maxx) , l.suff + r.pref);
  return res;
}


void init(int v , int l , int r)
{
  if (l == r) {
      st[v].sum = st[v].pref = st[v].suff = st[v].maxx = a[r];
      return;
  }
  int mid = (l + r) / 2;
  init(2*v , l , mid);
  init(2*v + 1 , mid + 1 , r);
  st[v] = f( st[2 * v] , st[2 * v + 1] );
 
}

void update(int v , int l , int r , int idx , int val)
{
  if (l == r && r == idx) {
      st[v].sum = st[v].pref = st[v].suff = st[v].maxx = a[idx] = val;
      return;
  }
  int mid = (l + r) / 2;
  if (idx <= mid)
      update(2 * v , l , mid , idx , val);
  else
      update(2 * v + 1 , mid + 1 , r , idx , val);
  st[v] = f ( st[2 * v] , st[2 * v + 1] );
}

Node find(int v , int l , int r , int l1 , int r1)
{
  if (r == r1 && l == l1)
      return st[v];
  int mid = (l + r) / 2;
  if (r1 <= mid)
      return find(2 * v , l , mid , l1 , r1);
  if (l1 > mid)
      return find(2 * v + 1 , mid + 1 , r , l1 , r1);
  return f( find(2 * v , l , mid , l1 , mid) , find(2 * v + 1 , mid + 1 , r , mid + 1 , r1) );
}

int main()
{    
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
      scanf("%d",&a[i]);
     
  init(1 , 0 , n - 1);
 
  int c , x , y;
  scanf("%d",&m);
  for (int i = 0; i < m; i++) {
      scanf("%d %d %d",&c,&x,&y);
      if (c == 0)
          update(1 , 0 , n - 1 , x - 1 , y);
      if (c == 1)
          printf("%d\n",find(1 , 0 , n - 1 , x - 1 , y - 1).maxx);
     
  }
 
  return 0;
} 