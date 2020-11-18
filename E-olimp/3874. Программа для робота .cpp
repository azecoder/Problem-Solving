#include <stdio.h>
#include <stdlib.h>

long int n;
int main(int argc, char *argv[])
{
  scanf("%ld", &n);

if (n%2==0)
  printf("Not love\n");
else
  printf("Love\n");


return 0;
}