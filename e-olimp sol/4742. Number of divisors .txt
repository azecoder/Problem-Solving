#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

#define MAX 12

long CountDivisors (long n)
{
  long i, cnt = 0;

  for(i = 2; i <= sqrt(n); i ++)
      if(n%i == 0)        
            cnt ++;

  if(sqrt(n)*sqrt(n) == n)           return 2 * cnt - 1;
  else                               return 2 * cnt;
}

int main()
{
long n;
  cin >> n;

  cout << CountDivisors(n) << endl;

  return EXIT_SUCCESS;
}