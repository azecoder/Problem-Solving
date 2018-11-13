#include <iostream>

using namespace std;

unsigned long long a[1001][1001],i,j,m,n,x,y;

int main(int argc, char *argv[])
{
 scanf("%lld%lld",&n,&m);
 for(i=1; i<=m; i++)
 {
     scanf("%lld%lld",&x,&y);
     a[x][y]=1;
 }

 for(i=1; i<=n; i++)
 {
     for(j=1; j<n; j++)
     printf("%lld ",a[i][j]);
     printf("%lld\n",a[i][n]);
 }


 return EXIT_SUCCESS;
}