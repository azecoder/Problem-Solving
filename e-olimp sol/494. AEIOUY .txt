#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, n, k;
char a[101];
int main(int argc, char *argv[])
{

 gets(a);

n=strlen(a);

for(i=0; i<n; i++)
  { if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y')
     k++;
          }
    printf("%d\n",k);


return 0;
}