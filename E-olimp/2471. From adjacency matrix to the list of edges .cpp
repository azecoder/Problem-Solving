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

#define MAX 101
#define ll long long

int i, j, n, a[MAX][MAX];
bool flag = false;

int main(int argc, char *argv[])
{
 cin >> n;
 for(i = 1; i <= n; i ++)
     for(j = 1; j <= n; j ++)
         cin >> a[i][j];

 for(i = 1; i <= n; i ++)
     for(j = i; j <= n; j ++)
         if(i != j && a[i][j] == 1)
         {
             cout << i << " " << j << endl;
             flag = true;
         }

  if(flag == false)    cout << endl;
  
   
  return EXIT_SUCCESS;
}