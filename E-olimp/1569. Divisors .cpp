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

LL i,sum1,sum2,a,b;

int main(int argc, char *argv[])
{
  while(cin >> a >> b)
  {
      if(a == 0 && b == 0)    break;

      sum1 = sum2 = 0;
      for(i = 1; i <= (int)sqrt(b); i++)                  sum1 += (int)b/i;
      for(i=1; i<=((int)b/((int)sqrt(b)+1)); i++)         sum1 += ((int)(b/i)-((int)b/(i+1)))*i;
      for(i=1; i<=(int)sqrt(a-1); i++)                    sum2 += (int)(a-1)/i;
      for(i=1; i<=((int)(a-1)/((int)sqrt(a-1)+1)); i++)   sum2 += ((int)((a-1)/i)-((int)(a-1)/(i+1)))*i;

      cout << sum1-sum2 << endl;
  }
  return EXIT_SUCCESS;
}