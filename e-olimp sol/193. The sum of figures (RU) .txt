#include <string>
#include <iostream>
#include <math.h>
using namespace std;
int n, m, i;
int main(int argc, char *argv[])
{
  cin>>n>>m;
  if( m == 9 * n ){
      for( i = 1; i <= n; i++ )
           cout<<9;
      cout<<" ";
      for( i = 1; i <= n; i++ )
           cout<<9;
      cout<<endl;
      }
  else if( m <= 10 ){
       cout<<1;
       for( i = 1; i <= n - 2; i++ )
            cout<<0;
       cout<<m - 1<<" ";
       cout<<m;
       for( i = 1; i <= n - 1; i++ )
            cout<<0;
       cout<<endl;
       }
  else if( m > (n - 1)*9){
       cout<<m % 9;
       for( i = 1; i <= n - 1; i++ )
            cout<<9;
       cout<<" ";
       for( i = 1; i <= n - 1; i++ )
            cout<<9;
       cout<<m % 9<<endl;
       }
  else if( m % 9 == 0 ){
       cout<<1;
       for( i = 1; i <= n - (1 + m/9); i++ )
            cout<<0;
       cout<<8;
       for( i = 1; i <= m / 9 - 1; i++ )
            cout<<9;
       cout<<" ";
       for( i = 1; i <= m / 9; i++ )
            cout<<9;
       for( i = 1; i <= n - m / 9; i++ )
            cout<<0;
       cout<<endl;
       }
  else{
       cout<<1;
       for( i = 1; i <= n - m / 9 - 2; i++ )
            cout<<0;
       cout<<m % 9 - 1;
       for( i = 1; i <= m / 9; i++ )
            cout<<9;
       cout<<" ";
       for( i = 1; i <= m / 9; i++ )
            cout<<9;
       cout<<m % 9;
       for( i = 1; i <= n - m / 9 - 1; i++ )
            cout<<0;
       cout<<endl;
       }
  return 0;
} 