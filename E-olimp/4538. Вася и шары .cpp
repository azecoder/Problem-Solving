#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define MAX 100001
#define size 1002
#define ll long long

int main(int argc, char *argv[])
{
  ll k, n, cem = 0, numb = 1;
  cin >> k;

  while(cem <= k)
  {
      cem += numb;
      numb ++;
  }

  cout << numb-2 << endl;

  return EXIT_SUCCESS;
}