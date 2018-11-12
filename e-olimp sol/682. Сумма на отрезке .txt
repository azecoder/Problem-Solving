#include <iostream>

using namespace std;
#define size 10000000
#define ulli unsigned long long int
ulli n, m, i, j, a[size], s[size], l[size], r[size];

int main() 
{
   cin>>n;
   for( i = 1; i <= n; i ++ )    scanf("%I64d",&a[i]);
   s[1] = a[1];
   for( i = 2; i <= n; i ++ )    s[i] = s[i - 1] + a[i];  

   cin>>m;
   for( j = 1; j <= m; j ++ )    scanf("%I64d%I64d",&l[j],&r[j]);
   for( j = 1; j <= m; j ++ )    printf("%I64d\n",s[r[j]] - s[l[j] - 1]);

   return 0;
}