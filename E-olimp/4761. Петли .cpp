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

#define ull unsigned long long
#define MAX 1001

ull a[MAX][MAX],i,j,m,n,x,y;
bool flag;

int main(int argc, char *argv[])
{
  cin >> n;
  for(i = 1; i <= n; ++i)
           for(j = 1; j <= n; ++j)
                  cin >> a[i][j];

  for(i = 1; i <= n; ++i)
           for(j = 1; j <= n; ++j)
                       if(a[i][j] != a[j][i])
                  {
                               flag = true;
                            break;
                 }
                    else if(i==j && a[i][j]!=0)
                    {
                                  flag = true;
                            break;
                 }

  if(flag == true)
             cout<<"YES"<<endl;
  else
                cout<<"NO"<<endl;

   
   return EXIT_SUCCESS;
}