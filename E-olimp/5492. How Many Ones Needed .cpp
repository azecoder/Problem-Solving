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
#include <cassert>
#include <memory.h>
#include <string>

using namespace std;

#define LL __int64
LL S(const unsigned long long int value,
                                   bool skip_leading_zeroes = false)
{

   LL ans = 0LLU;  

  bool found_first_one = false;
  const int bits = sizeof(unsigned long long) * 8;

  for (int current_bit = bits - 1; current_bit >= 0; current_bit--)
  {
      if ((value & (1ULL << current_bit)) != 0)
      {
          if (!found_first_one)
              found_first_one = true;
          ans++;
      }
  }
  return ans;
}


LL f(LL x)
{
 if(x <= 0) return 0;
 else if(x == 1)
     return 1;
 else if(x%2LL)
     return 2 * f((x-1)/2) + (x+1)/2;
 else
 {
     return f(x-1) + S(x);
 }
}

LL a, b, i = 0;
int main()
{
 while(scanf("%llu %llu", &a, &b), a+b)
 {
     printf("Case %llu: %llu\n", ++i, f(b)-f(a-1));
 }
 return EXIT_SUCCESS;
} 