#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[101];
int main(int argc, char *argv[])
{
   gets(a);

long n;
 n=strlen(a);

long i,s=0;
 for(i=0;i<n;i++)
    s+=(a[i]-48); //   printf("%ld",s);

long square;
  square=s*s;

    printf("%ld\n",square);

 
 return 0;
}