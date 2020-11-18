#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double n,m,k,a[100],s=1;
  int i;
  scanf("%lf%lf%lf",&n,&m,&k);
  for(i=0;i<n;i++)   scanf("%lf",&a[i]);

  if(k>m)
  for(i=m-1;i<=k-1;i++)   s*=a[i];
  else
  for(i=k-1;i<=m-1;i++)   s*=a[i];

  printf("%.0lf\n",s);
 
 return 0;
} 