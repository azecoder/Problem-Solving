#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

long c[31], i, res, p = 1, a, b;
int main(int argc, char *argv[])
{
  c[1] = p; 
  for( i = 2; i <= 30; i++ ){
       p = p * 2;
       c[i] = p;
       }
  cin >> a >> b;
  if( a > b)
      swap(a,b);
  for( i = 1; i <= 30; i++ )
       if( c[i] >= a && c[i] <= b )
             res += c[i];
  cout << res << endl;
  
   return 0;
}