#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

#define ll long long
#define size 1001

int main(int argc, char *argv[])
{
  ll i, j, n, m;
  char a[size];
  cin >> m;
  for( i = 1; i <= m; i ++ )
  {
      cin >> i;
      cin >> a;
      n = strlen(a);

      cout << i << " ";
      if(next_permutation(a, a+n) == 0) cout << "BIGGEST" << endl;
      else
      {
          for( j = 0; j < n; j ++ ) cout << a[j];
          cout << endl;
      }
  }


  return EXIT_SUCCESS;
}