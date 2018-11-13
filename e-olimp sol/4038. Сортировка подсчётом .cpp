#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int n,i,j,a[10001],c,r;
int main(int argc, char *argv[])
{
  cin>>n;

for(i=0;i<n;i++)
   {
     scanf("%d",&c);
     a[c]++;
   }
r=10000;
while(a[r]==0 && r>=0)
  r--;
for(i=1;i<r;i++)
   {
      for(j=1;j<=a[i];j++)
         printf("%d ",i);
   }
for(j=1;j<a[r];j++)
   printf("%d ",r);
printf("%d\n",r);


 return EXIT_SUCCESS;
}