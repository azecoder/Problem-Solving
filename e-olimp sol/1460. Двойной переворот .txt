#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n,i,j,a,b,c,d,x[1001],y[1001];
  scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);

  for(i=1; i<=n; i++)   x[i]=i;
   
  for(i=a,j=b; i<=b,j>=a; i++,j--)   x[i]=j;
  
  for(i=1; i<=n; i++)   y[i]=x[i];
      
  for(i=c,j=d; i<=d,j>=c; i++,j--)   y[i]=x[j];
  
  for(i=1; i<n; i++)   printf("%d ",y[i]);
  printf("%d\n",y[n]);
  

  return 0;
}