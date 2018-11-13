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

int main(int argc, char *argv[])
{
  string a[4001];
  long long i,j,k,n,x,flag;
  cin>>n;
  for(i=1; i<=n*4; i++)
  cin>>a[i];

  for(i=1; i<=(n*4-4); i=i+4)
  for(j=1; j<=(n*4-4); j=j+4)
  {
      if(a[j+2].size()>a[j+6].size())
      {
          swap(a[j],a[j+4]);
          swap(a[j+1],a[j+5]);
          swap(a[j+2],a[j+6]);
          swap(a[j+3],a[j+7]);
      }
      else if(a[j+2].size()<a[j+6].size())
      continue;
      else
      {
          for(k=0; k<a[j+2].size(); k++)
          if(a[j+2][k]>a[j+6][k])
          {
              swap(a[j],a[j+4]);
              swap(a[j+1],a[j+5]);
              swap(a[j+2],a[j+6]);
              swap(a[j+3],a[j+7]);

              break;
          }
          else if(a[j+2][k]<a[j+6][k])
          break;
      }
  }

  for(i=1; i<=(n*4-4); i=i+4)
  for(j=1; j<=(n*4-4); j=j+4)
  if(a[j+2]==a[j+6])
  {
      x=min(a[j].size(),a[j+4].size());

      for(k=0; k<x; k++)
      if(a[j][k]>a[j+4][k])
      {
          swap(a[j],a[j+4]);
          swap(a[j+1],a[j+5]);
          swap(a[j+2],a[j+6]);
          swap(a[j+3],a[j+7]);

          break;
      }
      else if(a[j][k]<a[j+4][k])
      break;
  }

  for(i=1; i<=4*n; i=i+4)
  cout<<a[i+2]<<" "<<a[i]<<" "<<a[i+1]<<" "<<a[i+3]<<endl;


 
  return EXIT_SUCCESS;
}