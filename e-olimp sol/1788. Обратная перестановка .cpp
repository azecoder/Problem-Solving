#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

#define ll long long
#define size 1000001
ll a[size], b[size];

int main(int argc, char *argv[])
{
   ll n;    cin>>n;
   
   for( ll i = 1; i <= n; i++ )
   {
       cin>>a[i];
       b[a[i]] = i;
   }
   sort(a+1, a+n+1);
   for( ll i = 1; i < n; i++ )
       cout << b[a[i]] << " ";
   cout << b[a[n]] << endl;
 
   
   return EXIT_SUCCESS;
}