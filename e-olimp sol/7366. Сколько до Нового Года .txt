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
#define LL long long

#define pb push_back

using namespace std;

LL n, d, h, m, s;

int main()
{
   cin >> n;
   d = n / 86400;
   n %= 86400;
   h = n / 3600;
   n %= 3600;
   m = n / 60;
   n %= 60;
   s = n;
   cout << d << " " << h << " " << m << " " << s << endl;

   return 0;
} 