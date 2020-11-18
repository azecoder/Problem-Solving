#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

string a;
int c, v, i, k;
int main(int argc, char *argv[])
{
  cin>>a;
  for( i = 0; i < a.length(); i++ )
  {
     if( a[i] == 'y' )    v = v;
     else if( a[i] == 'a' || a[i] == 'e' || a[i] == 'u' || a[i] == 'o' || a[i] == 'i' )    v++;
     else   c++;
 }
 while( v <= c )
 {
     v++, c--, k++;
 }
 cout<<k<<endl;

 return EXIT_SUCCESS;
}