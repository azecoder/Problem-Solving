#include <stdio.h>
#include <stdlib.h>

int n, i;
unsigned long long perm;

int main(int argc, char *argv[])
{
 scanf("%d",&n);

perm=1;
for(i=1; i<=n; i++)
  {
   perm*=i;
  }

 printf("%llu\n",perm);


 return 0;
}