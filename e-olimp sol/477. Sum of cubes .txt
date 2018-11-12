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
#define MAX 20000
#define maxNumb 1000
ll i,j,n;

void binaryy_search(ll l, ll r)
{
  ll mid = (l + r) / 2;

  if((i * i * i + mid * mid * mid) == n)
  {
      cout << i << " " << mid << endl;
      return;
  }
  
  if((mid == l) || (mid == r))    return;
  else if((i * i * i + mid * mid * mid) > n)
      binaryy_search(l, mid);
  else
      binaryy_search(mid, r);
}

int main()
{
  cin >> n;

  for(i = -MAX; i <= maxNumb; i ++)
      if(i < 0)
          binaryy_search(0, MAX);
      else
          binaryy_search(i, MAX);
              
   
   return EXIT_SUCCESS;
}