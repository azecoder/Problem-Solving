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

#define size 101

int main(int argc, char *argv[])
{
  long a[size][size];
  long i, j, n, say;
     cin >> n;

  if(n == 1)
  {
      cout << "1\n";
      return 0;
  }

  i = 2; j = 1; say = 2;
  a[1][1] = 1;

  while(1)
  {
      while(i >= 1)
      {
          a[i][j] = say;
          say ++; i --; j ++;

          if(j > n)    break;
      }
      i ++; j --;

      if(j != n)     j ++;
      else              i ++;

      if(say == n*n+1)    break;

      while(j >= 1)
      {
          a[i][j] = say;
          say ++; i ++; j --;

          if(i > n)    break;
      }
      i --; j ++;

      if(i != n)     i ++;
      else              j ++;

      if(say == n*n+1)    break;
  }


  for(i = 1; i <= n; i ++)
  {
      for(j = 1; j < n; j ++)
         cout << a[i][j] << " ";
      cout << a[i][n] << endl;
  }

  return EXIT_SUCCESS;
}