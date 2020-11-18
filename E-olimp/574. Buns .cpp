#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
#define size 1000001
long i,j,h,n,x,k,a[size],b[size];

int main()
{
  scanf("%ld%ld",&n,&k);
  for(i=1; i<=n; i++)
  {
      scanf("%ld",&x);
      a[x]++;
  }

  for(i=1; i<=1000000; i++)
      if(a[i]<=k)    for(j=1; j<=a[i]; j++)    b[h++]=i;
  
  b[h]='/0';
  sort(b,b+h);
  
  if(h!=0)
  {
      for(i=h-1; i>0; i--)
          printf("%ld ",b[i]);
      printf("%ld\n",b[0]);
  }

  return 0;
}