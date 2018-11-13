#include <stdio.h>
#include <stdlib.h>

struct time
{
int h,m,s;
};
struct time a[100],p;
int n,i,j,t1,t2;
int main(int argc, char *argv[])
{

scanf("%d", &n);
 for(i=0;i<n;i++)
scanf("%d%d%d", &a[i].h, &a[i].m, &a[i].s);
m:       for(i=0;i<n-1;i++)
{
    t1=a[i].h*3600+a[i].m*60+a[i].s;
    t2=a[i+1].h*3600+a[i+1].m*60+a[i+1].s;

   if(t2<t1)
   {
      p=a[i];
      a[i]=a[i+1];
      a[i+1]=p;
goto m;
                }
}
   for(i=0;i<n;i++)
      printf("%d %d %d\n", a[i].h, a[i].m, a[i].s);
return 0;
}