#include <iostream>
#include <string>

using namespace std;
char a[100];
int i, l, k;
int main ()
{
   while(gets(a))
   {
      k = 0;
      if( a[0] == '#' )   break;
      for( i = 0; i < strlen(a); i++ )
      if( a[i] != 'd' && a[i] != 'b' && a[i] != 'o' && a[i] != 'i' && a[i] != 'x' && a[i] != 'w' && a[i] != 'v' && a[i] != 'p' && a[i] != 'q')
         k++;
      if( k != 0 )   cout<<"INVALID"<<endl;
      if( k == 0 )
      {    
          for( i = 0; i < strlen(a); i++ )
          {
              if( a[i] == 'b' || a[i] == 'd' )
              {
                 if( a[i] == 'b' )   a[i] = 'd';
                 else                a[i] = 'b';
              }
              if( a[i] == 'p' || a[i] == 'q' )
              {
                 if( a[i] == 'p' )    a[i] = 'q';
                 else                 a[i] = 'p';
              }
          }
          for( i = strlen(a)-1; i >= 0; i-- )    cout<<a[i];
          cout<<endl;
      }
   }

   return EXIT_SUCCESS;
}