#include <stdio.h>
#include <stdlib.h>
#define MAX 10001

long i,j,n,a[MAX],k,c;
long min,imin,g=0;

int main(int argc, char *argv[])
{
 scanf("%ld",&n);

for(i=0; i<n; i++)
 scanf("%ld",&a[i]);

k=a[0];
for(j=0; j<n-1; j++)
 {
  min=a[j];
  imin=j;
  for(i=j+1; i<n; i++)
     if(a[i]<min)
      {
       min=a[i];
       imin=i;
      }

  if(a[j]!=a[imin])
    {
     c=a[j];
     a[j]=a[imin];
     a[imin]=c;
     if(a[imin]==k || a[j]==k)
        g++;
    }
 }

printf("%ld\n",g);


return 0;
}