#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int n,i,j,k,m;
char a[MAX],x;
int main(int argc, char *argv[])
{
  scanf("%s %d", a, &m);

    n=strlen(a);

  for(i=0; i<n; i++)
     {
        a[i]=a[i]-m;

        while(a[i]<65)
             {
                x=65-a[i];
                a[i]=91-x;
             }
     }

  for(i=0; i<n; i++)
     printf("%c", a[i]);

printf("\n");


return 0;
}