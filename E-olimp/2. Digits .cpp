#include <stdio.h>
#include <stdlib.h>

long n;
int k;
int main(int argc, char *argv[])
{
   scanf("%ld",&n);
if(n==0)
k=1;
else
{   k=0;
 while(n!=0)
{
    n=n/10;
    k++;
}
}   printf("%d\n", k);
 return 0;

}