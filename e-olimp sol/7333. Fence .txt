#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>

#define LL long long

using namespace std;

LL n, x, y, kx, ky, bx, by;

int main()
{
   cin >> n >> x >> y;

   kx = bx = x;
   ky = by = y;
   for(int i = 2 ; i <= n ; i ++)
   {
       cin >> x >> y;
       kx = min(kx, x);
       ky = min(ky, y);
       bx = max(bx, x);
       by = max(by, y);
   }
   cout << 2 * (bx - kx + by - ky) << endl;

   return 0;
} 