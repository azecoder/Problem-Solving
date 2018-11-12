#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int compare (const void * a, const void * b)
{
return ( *(int*)a - *(int*)b );
}
long n,a[100000],k;
int main()
{
   cin>>n;
   for(int i=0;i<n;i++)
       cin>>a[i];
   qsort(a,n,sizeof(long),compare);

   for(int i=2;i<n;i++)
       if(a[i]!=a[i-1]+a[i-2])k=1;

   if(k==0)
       cout<<"YES\n";
   else
       cout<<"NO\n";
   

   return 0;
} 