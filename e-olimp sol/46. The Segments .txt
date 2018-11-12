#include <iostream>

using namespace std;

long long p = 2, n, a = 1, b = 1, r = 2, s = 2;

int main()
{
   cin >> n;
   while( s + p <= n )
   {
       s +=p;
       r++;      
       a = b;
       b = p;
       p = a + b;    
   }
   cout << r << endl;
 
  return 0;
} 