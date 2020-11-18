#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define MAX 100001

int n, i, j, l;
int k, s;
long long a[MAX],b[MAX],c[MAX];
long long maxx,cvb;

int main(int argc, char *argv[])
{

  scanf("%d",&n);

for(i=0; i<n; i++)
 {
  scanf("%lld",&a[i]);
 }

j=0;
for(i=0; i<n; i++)
 {
  if(a[i]%1000000000==0) k=9;
  else if(a[i]%100000000==0) k=8;
  else if(a[i]%10000000==0) k=7;
  else if(a[i]%1000000==0) k=6;
  else if(a[i]%100000==0) k=5;
  else if(a[i]%10000==0) k=4;
  else if(a[i]%1000==0) k=3;
  else if(a[i]%100==0) k=2;
  else if(a[i]%10==0) k=1;
  else k=0;

  b[i]=k;
 }

maxx=b[0];
for(i=0; i<n; i++)
 {
  if(maxx<=b[i])
    maxx=b[i];
 }


for(i=0; i<n; i++)
 {
  if(maxx==b[i])
    {
     cvb=a[i];
    }
 }

for(i=0; i<n; i++)
 {
  if(maxx==b[i])
    {
      if(cvb>a[i])
        cvb=a[i];
    }
 }

 printf("%lld\n",cvb);


return 0;
}