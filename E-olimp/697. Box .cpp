#include <stdio.h>
#include <math.h>
double a,b;
int n,i;
int main(int argc, char *argv[])
{   scanf("%d", &n);
  for(i=1;i<=n;i++)  
{   scanf("%lf", &a);
   b=a/6;
   printf("%.10lf\n", b);}


return 0;

}