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

int a[MAX][MAX], b[MAX];

int main()
{
int n;
  cin >> n;
  for(int i = 1; i <= n; i ++)
      for(int j = 1; j <= n; j ++)
          cin >> a[i][j];

  for(int i = 1; i <= n; i ++)
      cin >> b[i];

int cnt = 0;
  for(int i = 1; i <= n; i ++)
      for(int j = i; j <= n; j ++)
          if(a[i][j] == 1 && b[i] != b[j])    cnt++;

  cout << cnt << endl;

  return 0;
}