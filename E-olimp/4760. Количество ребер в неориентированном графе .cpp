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

#define ull unsigned long long
#define MAX 101

int main(int argc, char *argv[])
{
  int n;
      cin >> n;
  
  int cnt = 0;
  int x;
  for(int i=1; i<=n; i++)
      for(int j=1; j<=n; j++)
      {
          cin >> x;
          
          if(x==1)    cnt++;
      }
  cout << cnt/2 << endl;

   
   return EXIT_SUCCESS;
}