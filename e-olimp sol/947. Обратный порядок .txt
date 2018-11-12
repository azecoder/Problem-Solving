#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[4];
int main(int argc, char *argv[])
{
  gets(a);

int n;
n=strlen(a);

int i,l,k,m,s,b[5];
for(i=0;i<n;i++)
   b[0]=a[0]-48;
   b[1]=(a[1]-48);
   b[2]=(a[2]-48);


 for(i=2;i>=1;i--)
   {
       printf("%d",b[i]);
   }
      printf("%d\n",b[0]);



 return 0;
}