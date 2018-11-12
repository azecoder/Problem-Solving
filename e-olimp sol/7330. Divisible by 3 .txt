#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cstring>
#include <memory.h>
#include <algorithm>
#include <set>

using namespace std;

long long n;
int main()
{
  cin >> n;
  if(n%3 == 0)        cout << n/3 * 2;
  else if(n%3 == 1)   cout << (n-1)/3 * 2;
  else                cout << 1 + (n-2)/3 * 2;
  cout << endl;

  return 0;
} 