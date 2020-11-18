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

set <long> s;

int main()
{
  long n;

  while(1)
  {
      cin >> n;

      if(n == 0)    break;
      s.insert(n);
  }
  cout << s.size() << endl;

   
   return EXIT_SUCCESS;
}