#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,n;
float s, a[100], k;
int main(int argc, char *argv[])
{
 scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%f",&a[i]);
           k=0;
           s=0;
for(i=0;i<n;i++)
   if(a[i]>0)
   {
          s=s+a[i];
          k++;
          }
 if(k==0)
          printf("Not Found\n");
 else
          printf("%.2f\n",s/k);
  return 0;
}