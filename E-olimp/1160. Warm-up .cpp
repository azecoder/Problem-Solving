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
#define MAX 101

int a[MAX],b[MAX];

int main(int argc, char *argv[])
{
  int i, n, max, say = 0;
      cin >> n;
  for(i = 1; i <= n; i ++)
      cin >> a[i] >> b[i];

  for(i = 1; i <= n; i ++)
      if(b[i] == 0)   say++;

  if(say == n)
      cout << "-1" << endl;
  else
  {
      max = 0;
      for(i = 1; i <= n; i ++)
      if(a[i] > max && b[i] == 1)
      max = a[i];

      for(i = 1; i <= n; i ++)
      if(a[i] == max && b[i] == 1)    break;;
      cout << i << endl;
  }

   return EXIT_SUCCESS;
}