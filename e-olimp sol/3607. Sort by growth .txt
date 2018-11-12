#include <stdio.h>
#include <stdlib.h>

int a[20001],i,n,say,x,y;

int main(int argc, char *argv[])
{
while(scanf("%d",&n)!=EOF)
{
   for(i=1; i<=n; i++)
   scanf("%d",&a[i]);
   scanf("%d%d",&x,&y);
   say=0;

   for(i=1; i<=n; i++)
   {
       if(a[i]>=x && a[i]<=y)
       say++;
   }

   printf("%d\n",say);
}


return 0;
}