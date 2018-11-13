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

lli S(ll n)
{
   lli d, s = 0;
   if( n == 0 )    return 0;
   for( d = 1; d <= 9; d++ )
        s += d*( n / 10 + (d <= n % 10) );
   
   s+=S(n/10);
   return s;
}
ll p, q;
int main(int argc, char *argv[])
{
  while(cin >> p >> q)
  {
    if( p < 0 && q < 0 )    break;           
    cout << S(q) - S(p - 1) << endl;
  }

   
   return EXIT_SUCCESS;
}