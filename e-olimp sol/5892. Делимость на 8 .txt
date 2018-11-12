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

#define ll long long
#define lli long long int

int main(int argc, char *argv[])
{
  int x[]={6,12,20,28,36,44,52,60,68,76,84,92};
  ll a,b,i,say=0;
  cin >> a >> b;

  if(b < 104)
  {
      for(i = 0; i <= 11; ++i)
          if(a <= x[i] && b >= x[i])    say++;

      cout << say <<endl;
  }
  else if(b-a < 8 && b >= 104)
  {
      for( i = a; i <= b; ++i)
          if(i%8 == 0)
              say ++;

      cout << say << endl;
  }
  else
      cout << (b-a)/8+1 << endl;


   return EXIT_SUCCESS;
}