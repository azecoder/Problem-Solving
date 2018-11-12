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

ll A, B, C, D, i;
int main(int argc, char *argv[])
{
  while(cin>>B>>C)
  {
      D = i = 0;
      if( B == 0 && C == 0 )    break;

      A = C - B;
      i = B / A + 1;
      cout << i << endl;
  }
     
   
   return EXIT_SUCCESS;
}