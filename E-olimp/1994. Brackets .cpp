#include <cstdio>

#include <vector>

#include <algorithm>

#include <cstring>

#define MAX 100010

using namespace std;

 

struct node

{

  long long min, add;

} SegTree[4*MAX];

 

int min(int i, int j)

{

  return (i < j) ? i : j;

}

 

void build (vector<int> &a, int v, int LeftPos, int RightPos)

{

  if (LeftPos == RightPos)

  {

    SegTree[v].min = a[LeftPos];

    SegTree[v].add = 0;

  }

  else

  {

    int Middle = (LeftPos + RightPos) / 2;

    build (a, v*2, LeftPos, Middle);

    build (a, v*2+1, Middle+1, RightPos);

 

    SegTree[v].min = min(SegTree[v*2].min,SegTree[v*2+1].min);

    SegTree[v].add = 0;

  }

}

 

void Push(int v, int LeftPos, int Middle, int RightPos)

{

  if (SegTree[v].add)

  {

    SegTree[2*v].add += SegTree[v].add;

    SegTree[2*v].min += SegTree[v].add;

    SegTree[2*v+1].add += SegTree[v].add;

    SegTree[2*v+1].min += SegTree[v].add;

    SegTree[v].add = 0;

  }

}

 

void AddValue(int v, int LeftPos, int RightPos, int L, int R, int Value)

{

  if (L > R) return;

  if ((LeftPos == L) && (RightPos == R))

  {

    SegTree[v].add += Value;

    SegTree[v].min += Value;

    return;

  }

 

  int Middle = (LeftPos + RightPos) / 2;

  Push(v,LeftPos,Middle,RightPos);

 

  AddValue(2*v, LeftPos, Middle, L, min(Middle,R), Value);

  AddValue(2*v+1, Middle+1, RightPos, max(L,Middle+1), R, Value);

 

  SegTree[v].min = min(SegTree[2*v].min,SegTree[2*v+1].min);

}

 

int i, k, n, p, summa;

char s[100010];

vector<int> v;

 

int main(void)

{

  gets(s); n = strlen(s);

  for(summa = i = 0; i < n; i++)

  {

    // '(' ????????? ?????? 1

    // ')' ????????? ?????? -1

    if (s[i] == '(') summa++; else summa--;

    v.push_back(summa);

  }

 

  build (v, 1, 0, n - 1);

 

  scanf("%d",&k);

  while(k--)

  {

    scanf("%d",&p);

    if (s[p] == '(')

    {

      s[p] = ')';

      AddValue(1,0,n-1,p,n-1,-2);

      summa -= 2;

    } else

    {

      s[p] = '(';

      AddValue(1,0,n-1,p,n-1,2);

      summa += 2;

    }

    if ((SegTree[1].min >= 0) && (summa == 0)) printf("+\n");

    else printf("-\n");

  }

  return 0;

}

 

 