#include <stdio.h>
#include <stdlib.h>

int n, a, b;
int main(int argc, char *argv[])
{
scanf("%d", &n);
if(n<0)
n=-n;

 a=n/10;
 b=n%10;

printf("%d\n", (a+b));

 
 return 0;
}