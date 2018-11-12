#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,n;
float a[100], maxx;
int main(int argc, char *argv[])
{
 scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%f",&a[i]);
   maxx = a[0];
for(i=1;i<n;i++)
       if(a[i]>maxx)
           maxx=a[i];
 printf("%.2f\n",fabs(maxx));
  return 0;
}