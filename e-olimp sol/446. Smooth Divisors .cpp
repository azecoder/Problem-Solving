#include <stdio.h>
#include <stdlib.h>



int i,n,k;


int main(int argc, char *argv[])
{

scanf("%d", &n);

k=0;
  for(i=n-1; i>0; i--)
    {
    if(n/i==n%i)
     k++;
     }

 printf("%d\n", k);

return 0;
}