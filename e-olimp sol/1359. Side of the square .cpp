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
  double a, b, c, d, sahe;
  long netice;
  cin >> a >> b >> c >> d;
  
  sahe = a * b + c * d;
  
  netice = (long)(sqrt(sahe));
  
  cout << netice << endl;  

  return EXIT_SUCCESS;
}