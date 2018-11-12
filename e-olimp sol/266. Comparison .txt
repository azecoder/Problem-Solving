#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[10001], b[10001];
int m, n;
int main(int argc, char *argv[])
{
 scanf("%s %s", a, b);
   strcmp(a,b)>0;
   n=strlen(a);
   m=strlen(b);

   if(n>m)
   printf(">\n");

   else
   if(n<m)
    printf("<\n");

   else
   if(n=m)
   {
       if(strcmp(a,b)>0)
   printf(">\n");
   else
       if(strcmp(a,b)<0)
   printf("<\n");
       else
       printf("=\n");
}
 
 return 0;
}