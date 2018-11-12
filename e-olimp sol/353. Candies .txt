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

#define ull unsigned long long
#define MAX 10001

int main(int argc, char *argv[])
{
  ull i,n,a[MAX],max1,max2,x,y;
         cin >> n;
  for(i = 1; i <= n; i ++)
       cin >> a[i];
  
  max1 = 0;
  for(i = 1; i < n; i ++)
  if(a[i] + a[i+1] > max1)
  {
      max1 = a[i] + a[i+1];
      x = i;
      y = i + 1;
  }
  
  a[x] = a[y] = 0;
  
  max2 = 0;
  for(i = 1; i < n; i ++)         if(a[i] + a[i+1] > max2)         max2=a[i]+a[i+1];
  
  cout << max1 + max2 << endl;
   
   
   return EXIT_SUCCESS;
}