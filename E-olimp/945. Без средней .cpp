#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[4];
int main(int argc, char *argv[])
{
   gets(a);

int n;
 n=strlen(a);

int i,l,k,m,s;
 for(i=0;i<n;i++)
    l=a[0]-48;
    k=a[1]-48;
    m=a[2]-48;

s=l*10+m;
    printf("%d\n",s);


 return 0;
}