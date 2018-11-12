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

#define SIZE 1001

int main(int argc, char *argv[])
{
  int a[SIZE], i, j, n, m, adam1, adam2;
  char x, y;
  cin >> n;
  for(i = 1; i <= n; i ++)
  {
      adam1 = 0;
      adam2 = 0;
      
      cin >> m;
      for(j = 1; j <= m; j ++)
      {
          cin >> x;
          cin >> y;
          
              if(x == 'R' && y == 'S')
                         adam1 ++;
              else if(x == 'R' && y == 'P')
                         adam2++;
              else if(x == 'S' && y == 'R')
                         adam2++;
              else if(x == 'S' && y == 'P')
                         adam1++;
              else if(x == 'P' && y == 'R')
                         adam1++;
              else if(x == 'P' && y == 'S')
                         adam2++;
      }
      if(adam1 > adam2)
           cout << "Player 1" << endl;
      else if(adam2 > adam1)
           cout << "Player 2" << endl;
      else if(adam1==adam2)
           cout << "TIE" << endl;   
  }
      

   
   return EXIT_SUCCESS;
}