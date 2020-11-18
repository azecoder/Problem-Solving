#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{double c,min,max,a[10000],b;
long i=0,n;
while(scanf("%lf",&b)==1)
{
  a[i]=b;
  i++;
}
n=i;
min=a[0];
for(i=1;i<n;i++)
{
  if(min>a[i])
  min=a[i];
}
max=n-1;
for(i=n-1;i>=0;i--)
{if(max<a[i])
max=a[i];
}
c=max-min;
printf("%.2lf\n",c);

  return EXIT_SUCCESS;
}