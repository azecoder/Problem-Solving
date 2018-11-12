#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int n, i, s[50002];

int f(int m)
{
   int i, r = m;
   for( i = 2; i <= (int)sqrt(1.0*m); i++ ){
       if( m%i == 0 )
       r = r - r/i;
       while( m%i == 0 )
           m/=i;
   }
   if(m > 1)
   r = r - r/m;
   return r;
}

int main(int argc, char *argv[])
{
   for( i = 1; i <= 50001; i++ )
       s[i] = s[i-1] + f(i);
   while( cin>>n ){
       if( n == 0 )
           break;
       cout<<(2*s[n]-1)<<endl;
   }
   return EXIT_SUCCESS;
}
