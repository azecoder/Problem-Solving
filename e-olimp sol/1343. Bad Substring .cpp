#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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

LL fibo[100], n;
void initial() {
   fibo[0] = fibo[1] = 1;
   for(int i = 2; i <= 91; i++)
       fibo[i] = fibo[i-1] + fibo[i-2];
}

int main()
{
   ios_base::sync_with_stdio(false);
   initial();
   cin >> n;
   cout << fibo[2*n+1] << endl;

   return 0;
} 