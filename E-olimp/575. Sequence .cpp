#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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
#include <cassert>
#include <memory.h>

using namespace std;

#define MAX 100001

long i,n,k=1;
long long a[MAX];

int main(int argc, char *argv[])
{
  cin >> n;
  for(i=1; i<=100; i++)
  {
      a[k]=i;
      a[k+1]=i+1;
      a[k+2]=i+2;
      k=k+3;
  }

  for(i=1; i<=300; i++)
  if(a[i]==n)
  {
      cout << i << endl;
      break;
  }


   return EXIT_SUCCESS;
}