#include <stdio.h>
#include <stdlib.h>

int n, a[1001], i, k[1001];
int main(int argc, char *argv[])
{
 scanf("%d", &n);
for(i=0; i<n; i++)
 scanf("%d", &a[i]);
for(i=0; i<n; i++)
 {
 k[i]=a[i]%3;
if(k[i]==1)
  printf("VGC\n");
else if(k[i]==2)
  printf("CVG\n");
else if(k[i]==0)
  printf("GCV\n");
 }


return 0;
}