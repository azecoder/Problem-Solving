#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[251];
int n,i,k;
int main(int argc, char *argv[])
{

scanf("%s",s);
n=strlen(s);
for(i=1;i<n;i++)
 if(s[i]=='-'||s[i]=='+'||s[i]=='*')
    k++;

printf("%d\n",k);
return 0;
}