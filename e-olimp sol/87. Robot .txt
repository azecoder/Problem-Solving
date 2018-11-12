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

#define MAX 10000

int i,j = MAX,n,a[2*MAX],say=0;

int main()
{
   string x;
          cin >> x;

      for(i = 0; i < x.size(); i ++)
      {
          if(x[i] == 'R')
          {
              j ++;
              a[j] = 1;
          }
          else if(x[i] == 'L')
          {
              j --;
              a[j] = 1;
          }
      }

      j = MAX;

      for(i = MAX-1; i >= 1; i --)
          if(a[i] == 1)       say ++;
          else                   break;

      for(i = MAX+1; i <= 2*MAX; i ++)
          if(a[i] == 1)    say ++;
          else                break;

      cout << say+1 << endl;

   
   return 0;
}