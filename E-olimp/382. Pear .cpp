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
 ll n, k, m;
 cin >> n >> k >> m;
 
 ll cem;
 while(n > 0)
 {
      cem = k;
      
      if(n - cem <= 0)    break;

      n -= cem;
      k += m;
 }
  
 cout<<n<<endl; 
   

 return EXIT_SUCCESS;
}