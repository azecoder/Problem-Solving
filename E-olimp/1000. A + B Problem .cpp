#include <stdio.h>
#include <stdlib.h>

long a, b;
int main(int argc, char *argv[])
{
while( scanf("%ld%ld", &a, &b)!=EOF)
 {
 printf("%ld\n", a+b);
 }
 
 return 0;
}