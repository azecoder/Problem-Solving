#include <iostream>
#include <stdio.h>

using namespace std;

long long a , b , c;

int main()
{
  scanf("%lld %lld",&a,&c); b = a + 1;
  for (;a != 0; b++) {
      long long n = b;
      while (n != 0) {
          a *= 10;
          n /= 10;
      }
      a = (a + b) % c;
  }
  cout<<b - 1<<endl;

  return 0;
} 