#include <cstdlib>
#include <iostream>
using namespace std;
char a[10001], b[10001];
int i, n, m, k;
int main(int argc, char *argv[])
{
 cin>>a>>b;
 n = strlen(a);
 m = strlen(b);
 if( n > m )
 cout<<">"<<endl;
 else
 if( n < m )
 cout<<"<"<<endl;
 else
 {
 for( i = 0; i < strlen(a); i++ )
 {
      if( (int)a[i] - 48 > (int)b[i] - 48 )
      {
          k = 1;
          cout<<">"<<endl;
          break;
      } 
      if( (int)a[i] - 48 < (int)b[i] - 48 )
      {
          k = 1;
          cout<<"<"<<endl;
          break;
      }
 }
 if( k != 1 )
 cout<<"="<<endl;
}                  
 return EXIT_SUCCESS;
}