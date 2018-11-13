#include <stdio.h>
#include <stdlib.h>


unsigned long long a,b,c,s;

int main(int argc, char *argv[])
{
scanf("%llu %llu %llu", &a,&b,&c);
s=a*b+a*c+b*c;
printf("%llu\n", s);

return 0;
}