#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;

long long n,a[1000000],i,m,k;

int main(int argc, char *argv[])
{scanf("%lld",&n);

for(i=1;i<=n-1;i++)
scanf("%lld",&a[i]);

sort(a,a+n);
k=1;

for(i=1;i<=n-1;i++)
{if(a[i]==k)
k++;else

{  m=1;
 printf("%lld\n",k );
 break;
}}
if(m==0)
printf("%lld\n",k);

 return EXIT_SUCCESS;
}