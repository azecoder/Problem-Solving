#include <stdio.h>
#include <stdlib.h>

double min,n;

int main()
{
   scanf("%lf", &n);
min=n;
while(scanf("%lf", &n)==1)
  {
    if(n<min)
        min=n;
  }
printf("%.2lf\n", min);

return 0;
}