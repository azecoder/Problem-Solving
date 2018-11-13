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

char a[MAX];

int main(int argc, char *argv[])
{
long k;
  cin >> k >> a;
  long len = strlen(a);

long number = 0;
long p = 1;
  for(long i = len-1; i >= 0; i --)
  {
      number += (a[i]-48)*p;
      p *= k;
  }

  cout << number << endl;

    return EXIT_SUCCESS;
}