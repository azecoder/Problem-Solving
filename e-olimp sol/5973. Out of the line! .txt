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

#define LL __int64

using namespace std;

LL a[101];
void f() {
   a[0] = 0;
   a[1] = 1;
   for(int i = 2; i <= 90; i++)
       a[i] = a[i-1] + a[i-2] + 1;
}
LL n;
int main()
{
   f();
   cin >> n;
   cout << a[n] << endl;
   return 0;
} 