#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm.>

using namespace std;

#define MAX 101
#define ll long long

int a[MAX][MAX];
int i,j,k=1,n,m,x,y,cem;

int main()
{
  cin >> n >> m;
  for(i=1; i<=m; i++)
  {
      cin >> x >> y;
      a[x][y]++;
  }

  for(i=1; i<=n; i++)
      for(j=1; j<=n; j++)
          if(i!=j && a[i][j]==0 && a[j][i]==0)
          {
              cout << "NO" << endl;
              return 0;
          }

  cout << "YES" << endl;

 return 0;
}