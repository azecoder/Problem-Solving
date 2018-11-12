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

int main(int argc, char *argv[])
{
  int n;
         cin >> n;
         
  int x, a, b, c;
  
  x = MAX - n - 1;
  
  a = x / 10;
  b = x / 100;
  c = x / 1000;
  
  cout << x + a + b + c << endl;


   return EXIT_SUCCESS;
}