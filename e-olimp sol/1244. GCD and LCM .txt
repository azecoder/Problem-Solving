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

long long ebob(long long a, long long b)
{
  if(b==0)
  return a;
  else
  return ebob(b,a%b);
}

long long ekob(long long a, long long b)
{
  return a*b/ebob(a,b);
}

int main(int argc, char *argv[])
{
  long long a,b,x,y,i,j=1,n,c[10001],say=0;
  cin>>a>>b;

  x=a;
  y=b;

  for(i=2; i<=b/2; i++)
  if(b%i==0)
  c[j++]=i;
  c[j]=b;

  for(i=1; i<=j; i++)
  {
      x=a*c[i];
      y=b/c[i];

      if(ebob(a,b)==ebob(x,y) && ekob(a,b)==ekob(x,y) && x>=a && x<=b && y>=a && y<=b)
      say++;
  }

  if(ebob(a,b)==a && ekob(a,b)==b)
  say++;


  cout<<say<<endl;

   
   return EXIT_SUCCESS;
}