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
#define MAX 1000001

ll a[101],b[MAX],say;

int main(int argc, char *argv[])
{
   ll n;
      cin >> n;
      for(ll i = 1; i <= n; i ++)
            cin >> a[i];
   ll m;
      cin >> m;
      for(ll i = 1; i <= m; i ++)
           cin >> b[i];
  
  for(ll i = 1; i <= n; i ++)
  {
      say = 0;
      
      for(ll j = 1; j <= m; j ++)    if(b[j] == i)    say ++;
      
      if(say > a[i])        cout<<"yes"<<endl;
      else                    cout<<"no"<<endl;
  }    
   
   return EXIT_SUCCESS;
}