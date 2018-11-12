#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <memory.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define mp make_pair

using namespace std;

int n , m;
int a[201][201];

int main()
{
 
  cin>>n>>m;
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
          scanf("%d",&a[i][j]);
  }
 
  for (int i = 1; i < n; i++) {
      for (int j = 0; j < m; j++) {
          int mx = a[i - 1][j];
          if (j - 1 >= 0) mx = max(mx , a[i-1][j-1]);
          if (j + 1 < m) mx = max(mx , a[i - 1][j + 1]);
          a[i][j] += mx;
      }
  }
  int ans = a[n - 1][0];
  for (int i = 1; i < m; i++)
      ans = max(ans , a[n - 1][i]);
  printf("%d\n",ans);
   
  return 0;
} 