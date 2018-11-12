#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxx, minn, a[100], i, n;
int main(int argc, char *argv[])
{
scanf("%d",&n);
  for(i=0;i<n;i++)
scanf("%d",&a[i]);

  minn=a[0];
  maxx=a[0];

  for(i=0;i<n;i++)
  {
  if(a[i]<minn)
     minn=a[i];
  if(a[i]>maxx)
     maxx=a[i];
  }
  printf("%d\n", minn + maxx);
return 0;
}