#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[1000001];
long long i,n,bir=0,iki=0;
int main(int argc, char *argv[])
{

   gets(a);

 n=strlen(a);

  for(i=0;i<n;i+=2)
      bir+=(a[i]-48);

  for(i=1;i<n;i+=2)
      iki+=(a[i]-48);

      printf("%lld\n",bir*iki);


 return 0;
}