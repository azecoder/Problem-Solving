#include <stdio.h>
#include <stdlib.h>

int a,b[101],n,i,j,m;
int main(int argc, char *argv[])
{
   scanf("%d",&n);

for(i=1;i<=n;i++)
   {
     scanf("%d",&a);    b[a]++;
   }
for(i=100;i>=1;i--)
   if(b[i]!=0)
      break;

m=i-1;
for(j=1;j<=m;j++)
   for(i=1;i<=b[j];i++)
       printf("%d ",j);

for(i=1;i<=b[m+1]-1;i++)
    printf("%d ", m+1);

printf("%d\n",m+1);


  return 0;
}