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

#define MAX 1001
#define ll long long

ll n, m, i, j, a[MAX][MAX], s[MAX][MAX], cem[MAX];

int main(int argc, char *argv[])
{
    cin >> n >> m;
    
   for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin >> a[i][j];
   for(j=1; j<=m; j++)
        for(i=1; i<=n; i++)
        {
                  cem[j]=cem[j]+a[i][j];
                 s[i][j]=s[i][j-1]+cem[j];
        }

    for(i=1; i<=n; i++)
    {
          for(j=1; j<m; j++)
                   cout << s[i][j] << " ";
          cout << s[i][m] << endl;
   }

   
   return EXIT_SUCCESS;
}