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

#define ll long long

map<ll,ll> m;
ll bir(ll n, ll p, ll q)
{
  if(m[n])     return m[n];
  if(n == 0)   return 1;

  return m[n] = bir(n/p, p, q) + bir(n/q, p, q);
}

int main(int argc, char *argv[])
{
  ll n,q,p;
  cin >> n >> p >> q;
  cout << bir(n, p, q) << endl;

   
   return EXIT_SUCCESS;
}