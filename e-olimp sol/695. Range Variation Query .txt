#include <iostream>
#include <stdio.h>

#define MAXN 1000100

#pragma comment(linker, "/STACK:100000000")

using namespace std;

typedef long long i64;

struct Segment
{
  i64 mn , mx;
  Segment()
  {
      mn = 1e18-1; mx = -mn;
  }
};

i64 a[MAXN];
Segment st[3 * MAXN];
int n = 0 , m , x[MAXN] , y[MAXN];

Segment combine(i64 a , i64 b)
{
  Segment res;
  res.mn = a; res.mx = b;
  return res;
}

void init(int v , int l , int r)
{
  if (l == r) {
      st[v].mn = st[v].mx = a[r];
      return;
  }
  int mid = (l + r) / 2;
  init(2 * v , l , mid);
  init(2 * v + 1 , mid + 1 , r);
  st[v].mn = min(st[2 * v].mn , st[2 * v + 1].mn);
  st[v].mx = max(st[2 * v].mx , st[2 * v + 1].mx);
}

void update(int v , int l , int r , int idx , int k)
{
  if (l == r && idx == r) {
      st[v].mn = st[v].mx = k;
      return;
  }
  int mid = (l + r) / 2;
  if (idx <= mid)
      update(2 * v , l , mid , idx , k);
  if (idx > mid)
      update(2 * v + 1 , mid + 1 , r , idx , k);
  st[v].mn = min(st[2 * v].mn , st[2 * v + 1].mn);
  st[v].mx = max(st[2 * v].mx , st[2 * v + 1].mx);
}

Segment empty;

Segment query(int v , int l , int r , int l1 , int r1)
{
  if (r1 < l || l1 > r)
      return empty;
  if (l >= l1 && r <= r1) {
      return st[v];
  }
  int mid = (l + r) / 2;
  Segment ls , rs;
  ls = query(2 * v , l , mid , l1 , r1);
  rs = query(2 * v + 1 , mid + 1 , r , l1 , r1);
  return combine(min(ls.mn , rs.mn) , max(ls.mx , rs.mx));
}

int main()
{
  scanf("%d",&m);
  for (int i = 0; i < m; i++) {
      scanf("%d %d",&x[i],&y[i]);
      if (x[i] > 0)
          n = n > y[i] ? n : y[i];
      else
          n = n > (-x[i]) ? n : (-x[i]);
  }
  for (i64 i = 0; i <= n; i++)
      a[i] = ((i * i) % 12345) + ((i * i * i) % 23456);
 
  init(1 , 1 , n);
  for (int i = 0; i < m; i++) {
      if (x[i] < 0)
          update(1 , 1 , n , -x[i] , y[i]);
      if (x[i] > 0) {
          Segment ans = query(1 , 1 , n , x[i] , y[i]);
          printf("%lld\n",ans.mx - ans.mn);
      }
  }
 
  return 0;
} 