#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, n, j, k, l, s;
int a[1000001];
int main(int argc, char *argv[])
{
  scanf("%d",&n);

k=0;
s=0;
for(i=0;i<n;i++)

  scanf("%d", &a[i]);

for(l=1;l<=100;l++)
   {
   for(i=0;i<n;i++)
      {
       if(l==a[i])
       k++;
      }
      if((k-s*4)%4)  k=k-((k-s*4)%4);
  }
       s+=(k-k%4)/4;
printf("%d\n",s);


return 0;
}