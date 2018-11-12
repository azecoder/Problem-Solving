#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

int i,j,h,n,p;
long cem,maxx,a[50];

int main()
{
  scanf("%d",&n);
  maxx=n;

  while(n>0)
  {
      a[++h]=n%2;       n/=2;
  }

  for(j=1; j<h; j++)
  {
      cem=0;
      for(i=h-1; i>=1; i--)     swap(a[i],a[i+1]);

      for(i=h; i>=1; i--)
      {
          cem+=a[i]*pow(2,i-1);       p*=2;
      }
      if(cem>maxx)       maxx=cem;
  }
  printf("%ld\n",maxx);


  return 0;
}