#include <iostream>

using namespace std;

int a[751][751], b[751], i, j, n, m, res, maxi[751], mini[751];
int main()
{
cin>>n>>m;
for( i = 1; i <= n; i++ )
{
   for( j = 1; j <= m; j++ )
   {
        scanf("%d",&a[i][j]);
        b[j] = a[i][j];
   }
   sort( b + 1, b + m + 1 );
   mini[i] = b[1];
}
for( j = 1; j <= m; j++ )
{
   for( i = 1; i <= n; i++ )
       b[i] = a[i][j];
   sort( b + 1, b + n + 1 );
   maxi[j] = b[n];
}
for( i = 1; i <= n; i++ )
for( j = 1; j <= m; j++ )
    if( a[i][j] == maxi[j] && a[i][j] == mini[i] )   res++;
cout<<res<<endl;

return 0;
}