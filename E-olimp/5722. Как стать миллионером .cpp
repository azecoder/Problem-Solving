#include <stdio.h>

unsigned long long a[65],p=1,x;
long i,j,say,n;

bool bsearchh(int l, int r, unsigned long long x)
{
   int mid=(l+r)/2;

   if(a[mid]==x)
       return 1;
   else if(l==r)
       return 0;
   else if(a[mid]<x)
       return bsearchh(mid+1,r,x);
   else if(a[mid]>x)
       return bsearchh(l,mid,x);
}

int main()
{
  for(i=0; i<=63; i++)
  {
      a[i]=p;
      p=p*2;
  }

  scanf("%ld",&n);
  for(i=1; i<=n; i++)
  {
      scanf("%llu",&x);

      if(bsearchh(0,63,x)==1)
          say++;
  }

  printf("%ld\n",say);

  return 0;
}