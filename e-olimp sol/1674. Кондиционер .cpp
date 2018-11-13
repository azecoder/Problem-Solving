#include <cstdlib>
#include <iostream>

using namespace std;

char ch;
int a, b, c, i, n, t, T;
int main(int argc, char *argv[])
{
  cin>>a>>b>>c>>n;
  T = c;
  for( i = 1; i <= n; i++ )
  { 
       cin>>ch>>t;
       if( ch == '+')   T += t;
       else             T -= t;

       if( T > b)        T = b;
       if( T < a)        T = a;
  } 
  cout<<T<<endl;        
  
  return EXIT_SUCCESS;
}