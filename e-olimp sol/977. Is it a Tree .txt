#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

#define MAX 101
#define ll long long

int a[MAX][MAX],used[MAX],i,j,n,cnt=0;

bool dfs(int p)
{
     used[p] = 1;
      for(int j = 1; j <= n; j ++)
          if(a[p][j] == 1 && used[j] == 0)
            dfs(j);
}

int main()
{
  cin >> n;

  for(i = 1; i <= n; i ++)
      for(j = 1; j <= n; j ++)
      {
          cin >> a[i][j];

          if(a[i][j] == 1)    cnt++;
      }
      
  cnt /= 2;

  if(n-1 != cnt)
  {
      cout << "NO" << endl;
      return 0;
  }
  dfs(1);

  for(i = 1; i <= n; i ++)
      if(used[i] == 0)
      {
          cout << "NO" << endl;
          return 0;
      }

  cout << "YES" << endl;

    
   return EXIT_SUCCESS;
}