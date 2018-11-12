#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define MAX 10000
#define size 101

int main()
{
  int n;
     cin >> n;
  int x[size][size];
  for(int i = 1; i <= n; i ++)
      for(int j = 1; j <= n; j ++)
          cin >> x[i][j];
  int sum;
  int minn = MAX;
  int a, b, c;
  for(int k = 1; k <= n; k ++)
      for(int i = 1; i <= n; i ++)
          for(int j = 1; j <= n; j ++)
              if(i == j || i == k || j == k)   continue;
              else
              {
                  sum = x[i][k] + x[k][j] + x[i][j];
                  if(sum < minn)    minn = sum, a = i, b = j, c = k;
              }

  cout << a << " " << b << " " << c << endl;

  return EXIT_SUCCESS;
}