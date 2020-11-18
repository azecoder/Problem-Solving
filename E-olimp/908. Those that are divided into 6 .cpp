#include <stdio.h>
#include <stdlib.h>

long int a[100],n,i,k,s;
int main(int argc, char *argv[])
{
      scanf("%ld",&n);
      for (i=0; i<n; i++)
  scanf("%ld",&a[i]);
      for (i=0; i<n; i++)
  if (a[i]>0 && a[i]%6==0) {
      s=s+a[i];
      k++;
}
  printf("%ld% ld\n",k,s);

return 0;
}