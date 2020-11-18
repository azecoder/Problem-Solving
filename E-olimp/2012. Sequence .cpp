#include <cstdlib>
#include <iostream>

using namespace std;

#define ll long long
#define size 1000001

ll int i, k = 1, n, a[size], m, s = 1;     

int main(int argc, char *argv[])
{
   cin >> n;   
   for( i = 1; i <= n; i ++ ) cin >> a[i];
   m = 0;
   do
   {
      for( i = k; i <= n; i++ ) 
      {
         if( a[i] + 1 == a[i + 1] ) s++; 
         else break;
      }
      if( s > m ) m = s;
      s = 1;
      k++;
   }while( i < n );
   
   cout << m << endl;
  
   return EXIT_SUCCESS;
}