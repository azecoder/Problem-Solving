#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

class Node
{
public:
  int v;
  Node* l;
  Node* r;
  Node(Node* l, Node* r, int v) :l(l), r(r), v(v){}
};

Node* build(int l, int r, int*a)
{
  if (l == r)
      return new Node(0,0,a[l]);
  Node* res = new Node(0, 0, 0);
  int m = (l+r) >> 1;
  res->l = build(l, m, a);
  res->r = build(m+1, r, a);
  return res;
}

int get_tree(Node* v, int l, int r, int p)
{
  if (l == p && r == p)
      return v->v;
  int m = (l+r) >> 1;
  if (m >= p)
      return get_tree(v->l, l, m, p);
  else
      return get_tree(v->r, m+1, r, p);
}

Node* create(Node* v, int l, int r, int p, int x)
{
  if (l ==p && r==p)
      return new Node(0,0,x);
  int m = (l + r) >> 1;
  if (m >= p)
      return new Node(create(v->l,l,m,p,x), v->r, 0);
  else
      return new Node(v->l, create(v->r, m+1, r, p, x), 0);
}

#define MAX (100100)
int a[MAX];
Node* data[MAX];

int main()
{
  int n,m;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
      scanf("%d", &a[i]);
  data[1] = build(1, n, a);
  scanf("%d",&m);
  int k = 1;
  for (int t = 1; t <= m; t++)
  {
      char s[10];
      scanf("\n%s", &s);
      if (s[0] == 'c')
      {
          int i, j, x;
          scanf("%d %d %d", &i, &j, &x);
          data[++k] = create(data[i], 1, n, j, x);
      }
      else
      if (s[0] == 'g')
      {
          int i, j;
          scanf("%d %d", &i, &j);
          printf("%d\n", get_tree(data[i], 1, n, j));
      }
  }
  return 0;
} 