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

#define MAX 101

int a[MAX][MAX];

int main()
{
   int n, m;
      cin >> n >> m;
   int x, y;
      for(int i = 1; i <= m; i ++)
      {
          cin >> x >> y;
          a[x][y] = 1, a[y][x] = 1;
      }
   int cnt;
      for(int i = 1; i <= n; i ++)
      {
          cnt = 0;

          for(int j = 1; j <= n; j ++)   if(a[i][j] == 1)   cnt ++;

          if(i != n)
              cout << cnt << " ";
          else
              cout << cnt << endl;
   }

  return EXIT_SUCCESS;
}