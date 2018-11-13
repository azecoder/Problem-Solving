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

int k,n,preva,prevb,show;
void farey()
{
   int a = 0; 
   int b = 1;
   int c = 1; 
   int d = n;
   int count = 0;
   while (count != show){
       k = (n + b)/d;
       preva = a;
       prevb = b;
       a = c; b = d;
       c = k*c-preva; d = k*d-prevb;
       count++;
   }
   printf("%u/%u\n",a,b);
}

int main(void){
   while(scanf("%u %u",&n,&show)!=EOF) farey();

   
   return 0;
}