#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
# define MAX 1000000

long n, i, m, a[MAX];
long k;
char input[MAX];

int main(int argc, char *argv[])
{
 gets(input);

n=strlen(input);

for(i=0; i<n; i++)
a[i]=input[i]-48;

//      reqemlerin sayi tek olarsa
if(n%2)
{
m=(n+1)/2;
for(i=0; i<=m-1; i++)
  {
    if(a[m-1-i]==a[m-1+i])  k++;
  }
  printf("%ld\n",k);
}
//      reqemlerin sayi cut olarsa
else
{
m=n/2;
for(i=0; i<=m-1; i++)
  {
    if(a[m-1-i]==a[m+i])  k++;
  }
  printf("%ld\n",k);
}




return 0;
}