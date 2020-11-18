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

int a[MAX];

int main()
{
int n;
  cin >> n;

int i;
  for(i = 1; i <= n; i ++)
      cin >> a[i];

int x;
  cin >> x;

  for(i = 1; i <= n; i ++)
      if(a[i] >= x)    continue;
      else                break;

  cout << i << endl;



  return 0;
}