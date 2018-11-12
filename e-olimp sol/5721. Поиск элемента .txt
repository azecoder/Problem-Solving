#include <stdio.h>
#include <algorithm>

using namespace std;

long i,n,k,a[100001];

int main()
{
   scanf("%ld%ld",&n,&k);
   for(i=0; i<n; i++)
       scanf("%ld",&a[i]);
       
   if(k>n)
   {
       printf("-1\n");
       return 0;
   }
   
   sort(a,a+n);

   printf("%ld\n",a[n-k]);

   return 0;
}