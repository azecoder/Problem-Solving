#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, n, c;
char a[250];

int main(int argc, char *argv[])
{
 gets(a);
 n=strlen(a);

   c=0;
 for(i=0; i<n; i++)

   if(a[i]==' ')
   c++;

 printf("%d\n", c+1);


return 0;
}