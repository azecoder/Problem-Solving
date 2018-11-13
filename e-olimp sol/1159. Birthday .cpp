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
#define MAX 1001

int main(int argc, char *argv[])
{
  int d,m=1,giris;
     cin >> giris;


  while((giris-m*31)%12 != 0)      m ++;

  d = (giris - m * 31) / 12;

  if( d < 10 && m < 10 )
      cout << 0 << d << "/" << 0 << m << endl;
  if( d < 10 && m >= 10 )
      cout << 0 << d << "/" << m << endl;
  if( d >= 10 && m < 10 )
      cout << d << "/" << 0 << m << endl;
  if( d >= 10 && m >= 10 )
      cout << d << "/" << m << endl;

   
   return EXIT_SUCCESS;
}