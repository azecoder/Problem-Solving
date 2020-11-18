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

ll ebob(ll a, ll b)
{
  if(b == 0)   return a;
  else         return ebob(b,a%b);
}

int main(int argc, char *argv[])
{
  ll a,b;
     cin >> a >> b;
     
  cout<<ebob(a,b)<<endl;

   
   return EXIT_SUCCESS;
}