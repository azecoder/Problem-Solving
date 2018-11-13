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

int a[1001],i = 0,x,n;

int main(int argc, char *argv[])
{
  
  while(cin >> x)
  {
       a[i] = x;
       i ++;
  }
  
  sort(a,a+i);
  
  if((i-1)%2 == 1)
      cout << "-1" << endl;
  else
      cout << a[(i-1)/2] << endl;
  
   
   return EXIT_SUCCESS;
}