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
#define MAX 1000001

ll a[MAX], i , n, say = 1;

int main(int argc, char *argv[])
{
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  scanf("%lld",&a[i]);
  
  sort(a,a+1+n);
  
  if(a[n]==a[n-1])
  {
     for(i=n; i>=1; i--)
              if(a[i]==a[i-1])
     say++;
     else
     break;
           }
  
  printf("%lld\n",say);
  
  
   
   return EXIT_SUCCESS;
}