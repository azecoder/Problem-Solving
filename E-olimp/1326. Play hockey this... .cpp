#include <stdio.h>
#include <stdlib.h>

unsigned long long n,i,c;

int main(int argc, char *argv[])
{
scanf("%llu", &n);

if(n==2)  printf("2\n");
else
{
c=1;
for(i=n; i>n-3; i--)
c=c*i;

printf("%llu\n",c);
}

return 0;
}