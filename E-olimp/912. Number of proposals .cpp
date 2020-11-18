#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, n, c;
char a[250];

int main(int argc, char *argv[])
{
gets(a);
n=strlen(a);

  c=0;
for(i=1; i<n; i++)
  if(!isalnum(a[i]) && a[i]!=' ' && a[i]!=',')
    if(isalnum(a[i-1]))
      c++;

printf("%d\n", c);


 
 return 0;
}