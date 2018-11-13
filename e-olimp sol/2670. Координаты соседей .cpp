#include <cstdio>
#include <iostream>
using namespace std;
long long a[10000000], b[10000000], i, j, c, d, x, y;
int main()
{
cin>>c>>d>>x>>y;
a[1] = x;
b[1] = y - 1;
a[2] = x - 1;
b[2] = y;
a[3] = x;
b[3] = y + 1;
a[4] = x + 1;
b[4] = y;
for( i = 1; i <= 4; i++ )
     if( a[i] > 0 && b[i] > 0 && a[i] <= c && b[i] <= d )
         cout<<a[i]<<" "<<b[i]<<endl;

 return EXIT_SUCCESS;
}