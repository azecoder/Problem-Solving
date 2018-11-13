#include <stdio.h>
#include <stdlib.h>

double n,cvb;
int main(int argc, char *argv[])
{

while(scanf("%lf", &n)!=EOF){cvb+=n;}
printf("%.0lf\n",cvb);

return 0;
}