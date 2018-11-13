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

int main(int argc, char *argv[])
{
  int n, m;
     cin >> n >> m;
  
  if(n > m)
          cout << m << endl;
  else if(m > n)
          cout << n << endl;
  else if(n == m)
          cout << n << endl;


   return EXIT_SUCCESS;
}