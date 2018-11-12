#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[15],b[15],c[15];
int i, n, j=0, l=0, m=0, k;
unsigned long long F=1;

int main(int argc, char *argv[])
{
gets(a);

n=strlen(a);


for(i=0; i<n; i++)
{
b[j]=a[i];  j++;
c[l]=a[i];  l++;
}

for(i=2; i<=n; i++)
F*=i;

for(i=0; i<n; i++)
{k=0;
for(j=i; j<=n; j++)
 {
  if(a[i]==b[j])
    {
     k++;
    }
 }
for(l=0; l<i; l++)
 {
  if(a[i]==c[l])
    {
     k=1;
    }
 }
if(k!=1)
 {
  for(m=2; m<=k; m++)
    {
     F/=m;
    }
 }
}


printf("%llu\n",F);




return 0;
}