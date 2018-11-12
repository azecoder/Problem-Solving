#include <stdio.h>
#include <stdlib.h>

int n, a, b, c;
int main(int argc, char *argv[])
{
scanf("%d", &n);
if(n<0)
n=-n;

a=n/100;
b=n/10%10;
c=n%10;
printf("%d\n", a);
printf("%d\n", b);
printf("%d\n", c);


return 0;
}