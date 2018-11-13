#include <stdio.h>

int i,n,x;
long long a[67],x0,x1,x2,x3,p;
int main()
{
  x0=1;x1=1;x2=2;x3=4;
  a[0]=1;a[1]=1;a[2]=2;a[3]=4;

  for(i=4; i<=67; i++)
  {
      p=x0+x1+x2+x3;
      x0=x1;x1=x2;x2=x3;x3=p;
      a[i]=p;
  }
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      scanf("%d",&x);
      printf("%lld\n",a[x]);
  }

  return 0;
}