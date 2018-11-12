#include <string>
#include <iostream>
#include <math.h>
using namespace std;
int m, i, a[100], k, f, p = 1, b[100], c[100], j, f1, f2, iki, uc, first;
int main(int argc, char *argv[])
{
  cin>>m;
  for( i = 2; i <= (int)sqrt(m); i++ ){
       if( m % i == 0 ){
           while( m % i == 0 ){
                  m = m / i;
                  k++;
                  a[k] = i;
                  }
           }
       }
  if( m > 1 ){
      k++;
      a[k] = m;
      }
  for( i = 1; i <= k; i++ )
       if( a[i] > 10 )
           f = 1;
  if( f == 1 )
      cout<<-1<<" "<<-1<<endl;
  else{
       for( i = 1; i <= k; i++ ){
            if( a[i] < 5 )
                j++;
            if( a[i] == 3 ){
                f1 = 1;
                uc++;
                }
            if( a[i] == 2 ){
                f2 = 1;
                iki++;
                }
            }
       if( f1 == 1 && f2 == 0 ){
           if( uc % 2 == 0 ){
                  for( i = uc + 1; i <= k; i++ )
                       cout<<a[i];
                  for( i = 1; i <= uc / 2; i++ )
                       cout<<9;
               }
            else{
                  cout<<3;
                  for( i = uc + 1; i <= k; i++ )
                       cout<<a[i];
                  for( i = 1; i <= uc / 2; i++ )
                       cout<<9;
                 }  
               
           }
       if( f1 == 0 && f2 == 1 ){
           if( iki % 3 == 0 ){
                  for( i = iki + 1; i <= k; i++ )
                       cout<<a[i];
                  for( i = 1; i <= iki / 3; i++ )
                       cout<<8;
               }
            else{
                  first = pow(2,iki%3);
                  cout<<first;
                  for( i = iki + 1; i <= k; i++ )
                       cout<<a[i];
                  for( i = 1; i <= iki / 3; i++ )
                       cout<<8;
                 }  
               
           }
       if( f1 == 0 && f2 == 0 ){
           for( i = 1; i <= k; i++)
                cout<<a[i];
           }
       if( f1 == 1 && f2 == 1 ){
           if( iki % 3 == 0 && uc % 2 == 0 ){
               for( i = 1; i <= k; i++ )
                    if( a[i] >= 5 )
                        cout<<a[i];
               for( i = 1; i <= iki/3; i++ )
                    cout<<8;
               for( i = 1; i <= uc/2; i++ )
                    cout<<9;
               }
           if( iki % 3 == 0 && uc % 2 == 1 ){
               cout<<3;
               for( i = 1; i <= k; i++ )
                    if( a[i] >= 5 )
                        cout<<a[i];
               for( i = 1; i <= iki/3; i++ )
                    cout<<8;
               for( i = 1; i <= uc/2; i++ )
                    cout<<9;
               }
           if( iki % 3 != 0 && uc % 2 == 0 ){
               cout<<pow(2,iki%3);
               for( i = 1; i <= k; i++ )
                    if( a[i] >= 5 )
                        cout<<a[i];
               for( i = 1; i <= iki/3; i++ )
                    cout<<8;
               for( i = 1; i <= uc/2; i++ )
                    cout<<9;
               }
           if( iki % 3 != 0 && uc % 2 != 0 ){
               first = pow(2,iki%3);
               if( first == 4 )
                   cout<<2;
               for( i = 1; i <= k; i++ )
                    if( a[i] == 5 )
                        cout<<a[i];
               cout<<6;
               for( i = 1; i <= k; i++ )
                    if( a[i] == 7 )
                        cout<<a[i];
               for( i = 1; i <= iki/3; i++ )
                    cout<<8;
               for( i = 1; i <= uc/2; i++ )
                    cout<<9;
               }
           }  
       cout<<" ";
       for( i = k; i > 0; i-- )
            cout<<a[i];
       cout<<endl;
}
  return 0;
} 