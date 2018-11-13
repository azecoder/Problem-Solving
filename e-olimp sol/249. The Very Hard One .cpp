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
  ll i,n,a[MAX];
        cin >> n;
  for(i=1; i<n; i++)
  {
      cin >> a[i];

      if(sqrt(a[i])*sqrt(a[i])==a[i])
          cout << "1 ";
      else
          cout << "0 ";
  }

  cin >> a[n];

  if(sqrt(a[n])*sqrt(a[n])==a[n])
          cout << "1\n";
      else
          cout << "0\n";
     
   
   return EXIT_SUCCESS;
}