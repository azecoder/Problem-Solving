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
   long n;
          cin >> n;
  
   double s;    
   for(long i = 1; i <= n; i ++)
      s = s + log(i);
   
   cout << (int)(s/log(10)) + 1 << endl;
   
   
   return EXIT_SUCCESS;
}