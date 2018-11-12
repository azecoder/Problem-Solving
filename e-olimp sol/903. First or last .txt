#include <stdio.h>
#include <stdlib.h>

int n, a, c;
int main(int argc, char *argv[])
{
scanf("%d", &n);
a=n/100;
c=n%10;

if(a>c)        printf("%d\n", a);
else if(c>a)   printf("%d\n", c);
else           printf("=\n");

return 0;
}