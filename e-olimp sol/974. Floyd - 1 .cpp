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
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

#define ull unsigned long long
#define MAX 101

int a[MAX][MAX],p[MAX][MAX];

int main(int argc, char *argv[])
{
  int n;
      cin >> n;
  
  for(int i = 1; i <= n; i ++)
      for(int j = 1; j <= n; j ++)
      {
          cin >> a[i][j];

          if(i == j)
              p[i][j] == 0;
          else if(a[i][j] == 0)
              p[i][j] = 202;
          else
              p[i][j] = a[i][j];
      }


  for(int k = 1; k <= n; k ++)
      for(int i = 1; i <= n; i ++)
          for(int j = 1; j <= n; j ++)
          {
              if((p[i][k] + p[k][j]) < p[i][j])
                  p[i][j] = p[i][k] + p[k][j];
          }

  for(int i = 1; i <= n; i ++)
  {
      for(int j = 1; j < n; j ++)
             cout << p[i][j] << " ";
      cout << p[i][n] << endl;
  }



   
   return EXIT_SUCCESS;
}