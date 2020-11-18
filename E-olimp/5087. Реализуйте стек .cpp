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

stack <long> s;

int main(int argc, char *argv[])
{
  long i,x,y,n;
  

  cin >> n;
  for(i = 1; i <= n; i ++)
  {
      cin >> x;

      if(x == 1)
      {
          cin >> y;
          s.push(y);
      }
      else
      {
          cout << s.top() << endl;
          s.pop();
      }
  }


   return EXIT_SUCCESS;
}