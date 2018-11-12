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

# define MAX 101

int main()
{
 int a[MAX][MAX], i, j, n, say = 0;
 cin >> n;
 for(i = 1; i <= n; i ++)
    for(j = 1; j <= n; j ++)
       cin >> a[i][j];

 for(i = 1; i <= n; i ++)
    for(j = 1; j <= n; j ++)
       if(a[i][j] == a[j][i] && a[i][j] == 1 && a[j][i] == 1)  say++;

 cout << say/2 << endl;



   return EXIT_SUCCESS;
}