#include <stdio.h>
#include <stdlib.h>

int last(int n)
{
  if(n==1)     return 1;
  if(n%2==0)   return 2*last(n/2)-1;
  else         return 2*last((n-1)/2)+1;
}

int main(int argc, char *argv[])
{
  int a,i,r,n,k;
  scanf("%d",&a);

  for(i=1; i<=a; i++)
  {
      scanf("%d",&n);
      r=0;

      while((k=last(n))!= n)
      r++, n=k;

      printf("Case %d: %d %d\n",i,r,n);
  }

 return EXIT_SUCCESS;
}