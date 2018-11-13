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
#include <iostream>
#include <string.h>

using namespace std;

#define size 10000001
#define ll long long

ll a[size], b[size];

// * * * * * * * * * * - M A I N - * * * * * * * * * * * * * *
int main(int argc, char *argv[])
{
  ll n;
      cin >> n;
  ll x;
      for(ll i = 0; i < n; i++)
      {
          cin >> x;
          a[x]++;
      }
  ll m;
      cin >> m;
  ll y;
      for(ll i = 0; i < m; i++)
      {
          cin >> y;
          cout << a[y] << endl;
      }


  return EXIT_SUCCESS;
}