#include <stdio.h>

int i,l,r,n,k,say,mid;

int main()
{
  scanf("%d%d",&n,&k);

  l=1;
  r=n;
  while(1)
  {
      say++;
      mid=(l+r)/2;
      if(mid==k)      break;
      if(k<mid)       r=mid-1;
      else if(k>mid)  l=mid+1;
  }
  printf("%d\n",say);

  return 0;
}