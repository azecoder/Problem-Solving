#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#pragma comment(linker,"/STACK:56777216")

using namespace std;

#define MAX 100000
#define size 15
#define ll long long

ll d[size], sum[size], l, res, a, b;
ll digitSum(int num, int len, int idx)
{
   ll p = 1, f = 10;
   for(int i = 1; i <= len; i++)    p *= 10;

   return sum[idx]*p*num + (num-1)*num/2*p + 45*(p/10)*len*num + num;
}

ll ans(ll n)
{
   l = res = 0;
   while(n > 0)
   {
       d[++l] = n % 10;
       n /= 10;
   }
     reverse(d+1, d+l+1);
     for(int i = 1; i <= l; i++)
         sum[i] = sum[i-1] + d[i];
     for(int i = 1; i <= l; i++)
   {    
       if(d[i] == 0)    continue;
       res += digitSum(d[i],l-i,i-1);
     }
     return res;
}

int main()
{
   while(cin >> a >> b)
       cout << ans(b) - ans(a-1) << endl;

  return EXIT_SUCCESS;
}