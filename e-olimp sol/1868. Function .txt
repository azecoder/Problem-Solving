#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define LL long long
#define ULL unsigned long long

using namespace std;

map < ULL, ULL > m;

ULL f(ULL n)
{
 if (m[n] > 0)  return m[n];
 if(n <= 2)     return m[n]=1;
 if(n%2 == 1)   return m[n]=f(6*n/7)+f(2*n/3);
 else           return m[n]=f(n-1)+f(n-3);
}

int main(int argc, char *argv[])
{
   ULL n,l;
   cin >> n;
   
   l=pow(2,32);
   cout << f(n)%l << endl;
 
   return EXIT_SUCCESS;
}