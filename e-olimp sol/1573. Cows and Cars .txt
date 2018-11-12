#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>


using namespace std;

int main(void)
{
   int NC, NW, NS;
   while(scanf("%d %d %d", &NW, &NC, &NS) == 3)
   {
       int T = NW + NC;
       printf("%.5lf\n", (NC * (T - 1)/(double)(T * (T - NS - 1))));
   }

   
   return 0;
}