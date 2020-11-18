#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>

#define MAXN 1002

using namespace std;

int a[MAXN], b[MAXN];
int n, m;

int main()
{
   cin >> m >> n;
   for(int i = 0 ; i < m ; i++)
       cin >> a[i];
   for(int i = 0 ; i < n ; i++)
       cin >> b[i];

   sort(a, a + m);
   sort(b, b + n);
   int j = 0;
   for(int i = 0 ; i < n ; i ++)
   {
       if(j > m - 1)       break;
       if(b[i] >= a[j])    j++;
   }
   cout << j << endl;

   return 0;
} 