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

#define MAX 51

int main(int argc, char *argv[])
{

  char a[MAX][MAX];
  int i,j,n,m,k;
         cin >> n >> m;
  
  
  for(i=n; i>=1; i--)
  {
      k=n+1-i;
      
      if(k%2==1)
      {
          for(j=1; j<=m; j++)
          {
              if(j%2==1)
                           a[i][j]='.';
              else
                              a[i][j]='X';
          }
      }
      else
      {
          for(j=1; j<=m; j++)
          {
              if(j%2==1)
                           a[i][j]='X';
              else
                              a[i][j]='.';
          }
      }
  }
  
  for(i=1; i<=n; i++)
  {
      for(j=1; j<=m; j++)
              cout<<a[i][j];
      cout<<endl;
  }            


   return EXIT_SUCCESS;
}