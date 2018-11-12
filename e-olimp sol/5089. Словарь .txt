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

#define MAX 101

int main(int argc, char *argv[])
{
  string a[MAX];
  
  int n;
      cin >> n;
  
  for(int i = 1; i <= n; i ++)    cin >> a[i];
  sort(a+1, a+n+1);

  for(int i = 1; i <= n; i ++)
      cout << a[i] << endl;

   
   return EXIT_SUCCESS;
}