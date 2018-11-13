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
#define MAX 1001

ll a[MAX],b[MAX],c[MAX],d[MAX];

int main(int argc, char *argv[])
{
  ll x,y,i,j,r,n,maxx,minx,maxy,miny,temp,uzun,en,sahe;
  cin >> x >> y >> r >>n;
  for(i=1; i<=n; i++)
  {
      cin >> a[i] >> b[i];
      c[i]=a[i];
      d[i]=b[i];
  }
  
  for(i=1; i<n; i++)
     for(j=1; j<n; j++)
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
            swap(b[j],b[j+1]);
        }
   
  for(i=1; i<n; i++)
     for(j=1; j<n; j++)
        if(d[j]>d[j+1])
        {
            swap(c[j],c[j+1]);
            swap(d[j],d[j+1]);
        }
  
  maxx=a[n]+r;
  minx=a[1]-r;
  maxy=d[n]+r;
  miny=d[1]-r;
  
  uzun=maxx-minx;
  en=maxy-miny;
  
  sahe=uzun*en;
  
  cout<<x*y-sahe<<endl;
  
   
   
   return EXIT_SUCCESS;
}