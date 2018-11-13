#include <stdio.h>
#include <stdlib.h>

int a,b,c,n,p;
int main(int argc, char *argv[])
{

scanf("%d", &n);
if(n<0)
{n=-n;}
 a=n/100;
 b=n%10;
 c=n/10%10;

printf("%d\n", a*b*c);

return 0;
}