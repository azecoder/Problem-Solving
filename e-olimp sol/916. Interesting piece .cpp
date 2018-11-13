#include <cstdlib>
#include <iostream>
using namespace std;
int a, b, c, d, i, j, k, m[10000], p = 1, l;
int main(int argc, char *argv[])
{
cin>>a>>b>>c>>d;
if( a > b)
swap(a,b);
if( c > d )
swap(c,d); 
for( i = a; i <= b; i++ )
     for( j = c; j <= d; j++ ){
          k++;
          m[k] = i*j;
          }
     for( i = 2; i <= k; i++ ){
          l = 0;
          for( j = i - 1; j >= 1; j--)
               if(m[i] == m[j])
                   l = 1;
               if( l == 0 )
                   p++;
}
cout<<p<<endl;

return EXIT_SUCCESS;
}