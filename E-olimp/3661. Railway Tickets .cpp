#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <memory.h>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <math.h>

#pragma comment(linker, "/STACK:99999999")
#define ALL(a) a.begin() , a.end()
#define ALL(a,n) a , a + n
#define clr(a,b) memset(a , b , sizeof(a))
#define f first
#define s second
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int,int> pr;
typedef long long ll;

int readInt() {
  int k = 0 , p = 1;
  char ch = getchar();
  if (ch == '-') p = -1;
  else k = ch - '0';
  while (ch = getchar()) {
      if (ch < '0' || ch > '9')
          break;
      k = k * 10 + (ch - '0');
  }
  return k * p;
}

template<typename t>
void print(t n) {
  t k = n;
  char output[20];
  int len = 0;
  if (n < 0) n *= -1;
  if (n == 0)
      output[len++] = '0';
  while (n > 0) {
      t m = n / 10;
      output[len++] = (n - 10 * m) + '0';
      n = m;
  }
  if (k < 0) output[len++] = '-';
  while (len > 0)
      putchar(output[--len]);
}

int l0,l1,l2,l3,c1,c2,c3,x,y,n,coor[10010];

long long ans[10010];

int main()
{
  l0=0;
  cin>>l1>>l2>>l3;

  cin>>c1>>c2>>c3;

  cin>>n;

  cin>>x>>y;

  if(x>y)
      swap(x,y);



  coor[1]=0;

  for(int i=2;i<=n;i++)
      cin>>coor[i];

  for(int i=1;i<=10000;i++)
      ans[i]=2000000000000000000LL;

  ans[x]=0;
  for(int i=x+1;i<=y;i++)
  for(int j=i-1;j>=x;j--){
      if((coor[i]-coor[j])>l0 && (coor[i]-coor[j])<=l1)
          if((ans[j]+(ll)c1)<ans[i])
              ans[i]=ans[j]+(ll)c1;
      if((coor[i]-coor[j])>l1 && (coor[i]-coor[j])<=l2)
          if((ans[j]+(ll)c2)<ans[i])
              ans[i]=ans[j]+(ll)c2;
      if((coor[i]-coor[j])>l2 && (coor[i]-coor[j])<=l3)
          if((ans[j]+(ll)c3)<ans[i])
              ans[i]=ans[j]+(ll)c3;
  }

  cout<<ans[y]<<endl;


  return 0;
} 