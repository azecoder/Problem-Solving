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

#define ll long long

int main(int argc, char *argv[])
{
      ll a[10]={0,1,10,100,1000,10000,100000,1000000};
   ll i,j,k=1,n,m,say=0,min=100,cem;
      char b[10];
      ll c[10001];
          cin >> n >> m;

  for(i = 1; i <= 7; i ++)
          if(a[i]    >= n && a[i] <= m)    say++;

  if(say!=0)        cout<<say<<endl;
  else
  {
      for(i = n; i <= m; i ++)
      {
          cem = 0;

          itoa(i,b,10);

          for(j = 0; j < strlen(b); j ++)
          cem += (b[j]-48);

          c[k++] = cem;
      }

      for(i = 1; i < k; i ++)
              if(c[i]<min)    min=c[i];

      for(i=1; i<k; i++)
              if(c[i]==min)    say++;

      cout<<say<<endl;

  }

   
   return 0;
}