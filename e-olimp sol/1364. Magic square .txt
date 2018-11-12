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
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

#define ull unsigned long long
#define MAX 101

int main(int argc, char *argv[])
{
  ull i,j,n,a[MAX][MAX],cem[MAX],flag=0;
     cin >> n;
  for(i=1; i<=n; i++)
     for(j=1; j<=n; j++)
        cin >> a[i][j];
  
  for(i=1; i<=n; i++)
     for(j=1; j<=n; j++)
        cem[i] += a[i][j];
  
  for(j=1; j<=n; j++)
     for(i=1; i<=n; i++)
        cem[j+n] += a[i][j];
  
  for(i=1; i<=n; i++)
     cem[1+2*n] += a[i][i];
  
  for(i=1, j=n; i<=n, j>=1; i++, j--)
     cem[2+2*n] += a[i][j];
  
  for(i=2; i<=2*n+2; i++)
     if(cem[1]!=cem[i])
        flag++;
      
  if(flag!=0)
     cout << "-1" << endl;
  else
     cout << cem[1] << endl;


   return EXIT_SUCCESS;
}