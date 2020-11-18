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

int main(int argc, char *argv[])
{
  string a,b,c;
  int i,j,k,n,flag,say=0,flag1;

  cin >> a;
  cin >> n;
  for(i = 1; i <= n; i ++)
  {
      c = a;

      cin >> b;
      flag1 = 0;

      for(j = 0; j < b.size(); j ++)
      {
          flag = 0;

          for(k = 0; k < c.size(); k ++)
          if(b[j] == c[k])
          {
              flag = 1;
              flag1 ++;
              c[k] = 48;
              break;
          }

          if(flag == 0)
          break;
      }

      if(flag1 == b.size())
      say ++;
  }

  cout << say << endl;

   
   
   return EXIT_SUCCESS;
}