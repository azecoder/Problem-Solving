#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int n, s, nn, x, v;
int main()
{
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   ios_base::sync_with_stdio(false);

   scanf("%d", &n);
   while(n--) {
       scanf("%d %d", &s, &nn);
       while(nn--) {
           scanf("%d %d", &x, &v);
           s += (x * v);
       }
       printf("%d\n", s);
   }
   return 0;
} 