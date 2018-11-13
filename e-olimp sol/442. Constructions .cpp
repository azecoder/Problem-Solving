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


int main(int argc, char *argv[])
{
  ll i,n,say=0,say1=0;
        cin >> n;

  for(i = 1; i <= sqrt(n); i ++)
  {
      if(n%i == 0)
      say ++;

      if(n%i == 0 && n/i == n/(n/i))
      say1 ++;
  }

  cout << 2*say-say1 << endl;
  
   
   
   return EXIT_SUCCESS;
}