#include <stdio.h>
#include <stdlib.h>

double max,n;

int main(int argc, char *argv[])
{

max=-1.0;
while(scanf("%lf", &n)==1)
{
if(n>max)
   max=n;
}
printf("%.2lf\n", max);

 return 0;
}