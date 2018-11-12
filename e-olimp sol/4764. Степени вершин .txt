#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

#define MAX 10001
#define ull unsigned long long

ull a[MAX][MAX],l[MAX],r[MAX];

int main(int argc, char *argv[])
{
ull n;
 cin >> n;
 for(ull i = 1; i <= n; i ++)
    for(ull j = 1; j <= n; j ++)
       cin >> a[i][j];

ull sum = 0;
 for(ull i = 1; i <= n; i ++)
 {
     sum = 0;

     for(ull j = 1; j <= n; j ++)
        sum += a[i][j];

     l[i] = sum;
 }

 for(ull j = 1; j <= n; j ++)
 {
     sum = 0;

     for(ull i = 1; i <= n; i ++)
         sum += a[i][j];

     r[j] = sum;
 }

 for(ull i = 1; i <= n; i ++)
    cout << l[i] << endl;

  return EXIT_SUCCESS;
}