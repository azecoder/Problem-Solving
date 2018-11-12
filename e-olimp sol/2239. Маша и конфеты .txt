#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int f(int m)
{
   int i,r = m, k = 0, s = 0;
   for( i = 2; i <= (int)sqrt(1.0*m); i++ ) {
       if( m%i == 0 ) {
           k = 1;
           r -= r/i;
           s += k;
       }
       while( m%i == 0 )
           m/=i;
   }

   if(m > 1)
       s++;
   r = r - r/m;
   return s;
}

int main(int argc, char *argv[])
{
   int n, i, a[1025], max = 0, k;
   cin>>n;
   for( i = 1; i <= n; i++ )
       cin>>a[i];
   sort(a+1,a+n+1);
   for( i = 1; i <= n; i++ )
   {
       if( max < f(a[i]))
       {
           max = f(a[i]);
           k = i;
       }
   }
   cout<<a[k]<<endl;

   return 0;
}
