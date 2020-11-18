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

#define ll long long
#define MAX 10001

int main(int argc, char *argv[])
{
  ll i,j,n,p=1,a[MAX],b[MAX],say=0,flag;

  for(i=1; i<=31; i++)
  {
      p=p*2;
      b[i]=p-1;
  }

  cin>>n;
  for(i=1; i<=n; i++)
  cin>>a[i];

  for(i=1; i<=n; i++)
  {
      flag=0;

      for(j=1; j<=31; j++)
      if(a[i]==b[j])
      {
          flag=1;
          break;
      }

      if(flag==1)
          say++;
  }

  cout<<say<<endl;

    
   return EXIT_SUCCESS;
}