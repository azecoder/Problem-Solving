#include <stdio.h>
#include <stdlib.h>
long k,n,a[1000001],b[15000001],i,j,m,c,x;
int main(int argc, char *argv[]) 
{
  scanf("%ld",&k);
  while(scanf("%ld",&n))
  {
     if(n==2)   break;
     a[i++]=n;
  }
  c=0;
  if(a[0]==1)
  b[c++]=0;
  j=0;
  while(j<i-1)
  {
     m=1;
     while(a[j]==a[j+1]&&m<k&&j<i-1)
     {
        m++, j++, x=j;
     }
     b[c++]=m;
     if(m==k)   b[c++]=0;
     j++;
  }
  if(a[i-1]!=a[i-2]||x<i-1||i==1)      b[c++]=1;
  if(b[c-1]==0)                        c--;
  for(i=0;i<c-1;i++)   printf("%ld ",b[i]);
  printf("%ld\n",b[c-1]);

 return 0;
}