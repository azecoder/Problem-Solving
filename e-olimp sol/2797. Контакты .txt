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

#define MAX 100001

int main()
{
 int a[MAX];
 int n;

 cin >> n;
 for(int i = 1; i <= n; i ++)
     cin >> a[i];

 sort(a+1, a+n+1);
 int cnt = 0;
 for(int i = 1; i <= n; i ++)
     if(a[i] != a[i+1])   cnt++;

 cout << cnt << endl;


 return EXIT_SUCCESS;
}