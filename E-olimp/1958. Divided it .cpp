#include <iostream>
#include <math.h>

using namespace std;

int i, n, a[102], d2, d3, d4, d5, d6, d8, d10, d11, s, s1, s2, m;
int main ()
{
  cin>>n;
  for( i = 1; i <= n; i++ )
  {
       cin>>a[i];
       s = s + a[i];
       if( i % 2 == 1 ) s1 += a[i];
       if( i % 2 == 0 ) s2 += a[i];
  }
  cin>>m;
  d2 = a[n], d3 = s;
  d4 = a[n-1]*10 + a[n];
  d8 = a[n-2]*100 + a[n-1]*10 + a[n];
  d11 = s1 - s2;
  if( m == 2 )
  {
      if( a[n] % 2 == 0 )    cout<<"YES"<<endl;
      else                   cout<<"NO"<<endl;
  }
  if( m == 3 )
  {
      if( d3 % 3 == 0 )      cout<<"YES"<<endl;
      else                   cout<<"NO"<<endl;
  }
  if( m == 4 )
  {
      if( d4 % 4 == 0 )      cout<<"YES"<<endl;
      else                   cout<<"NO"<<endl;
  }
  if( m == 5 )
  {
      if( a[n] == 0 || a[n] == 5 )   cout<<"YES"<<endl;
      else                           cout<<"NO"<<endl;
  }
  if ( m == 6 )
  {
      if( a[n]%2 == 0 && d3 % 3 == 0 )   cout<<"YES"<<endl;
      else                               cout<<"NO"<<endl;
  }
  if( m == 8 )
  {
      if( d8 % 8 == 0 )   cout<<"YES"<<endl;
      else                cout<<"NO"<<endl;
  }
  if( m == 9 )
  {
      if( d3 % 9 == 0 )    cout<<"YES"<<endl;
      else                 cout<<"NO"<<endl;
  }
  if( m == 10 )
  {
      if( a[n] == 0 )    cout<<"YES"<<endl;
      else               cout<<"NO"<<endl;
  }
  if( m == 11 )
  {
      if( (s1 - s2) % 11 == 0 )    cout<<"YES"<<endl;
      else                         cout<<"NO"<<endl;
  }

 return EXIT_SUCCESS;
}