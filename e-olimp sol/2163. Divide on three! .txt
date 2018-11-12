#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 300
int n,i,j,k,cem;
char a[size];

int main(int argc, char *argv[])
{
   scanf("%s", a);

  n=strlen(a);

  cem=0;

  for(i=0; i<n; i++)
     {
       cem=(int)a[i]+cem;
     }

  if(cem%3==0)
     printf("YES\n");
  else
     printf("NO\n");


return 0;
}