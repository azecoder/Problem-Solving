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

int main(int argc, char *argv[])
{
 ll a[MAX][MAX],i,j,n,say;
 cin>>n;

 i=1;
 j=2;
 say=2;

 a[1][1]=1;


 while(1)
 {
      while(j >= 1)
      {
          a[i][j] = say;
          say++;
          i++;
          j--;

          if(i>n)    break;
      }
      i--;
      j++;

      if(i == n)        j++;
      else                i++;

      if(say == n*n+1)     break;

      while(i >= 1)
      {
          a[i][j]=say;
          say++;
          i--;
          j++;

          if(j>n)    break;
      }
      j--;
      i++;

      if(j == n)    i++;
      else            j++;

      if(say == n*n+1)    break;
 }

 for(i = 1; i <= n; i ++)
 {
      for(j = 1; j < n; j ++)
           cout << a[i][j] << " ";
      cout << a[i][n] << endl;
 }


   
   return EXIT_SUCCESS;
}