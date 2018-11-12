#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <map>
#include <set>

#define MAXN 10001
#define clr(a, b) memset(a, b, sizeof(a))

#define pb push_back

using namespace std;

int n, cnt = 0;

int main()
{
   cin >> n;
   for(int  i = 0; i < n; i++) {
       double x; cin >> x;
       if(x < 30) cnt++;
   }
   int a = 2 * cnt;
   if(a%9 == 0)
       cout  << a / 9 << " " << cnt << endl;
   else
       cout  << 1 + (a / 9) << " " << cnt << endl;
   return 0;
} 