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
#include <memory.h>

#define LL __int64

using namespace std;


int T, n, cnt;
int main()
{
   scanf("%d", &T);
   while(T--)
   {
   scanf("%d", &n);
       int root = (int)(sqrt(1.0*n)), k = 0;
       for(int i = 2; i <= root; i++)
       {
           float a = log(1.0*n)/log(1.0*i);
           if((int)a - a == 0)
               k = 1;
       }
       if(k)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }
   }
   return 0;
} 