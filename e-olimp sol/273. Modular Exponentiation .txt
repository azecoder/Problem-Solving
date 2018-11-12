#include <stdio.h>
#include <stdlib.h>

  int mod(int a, int b, int c)
   {
      if(b==0)       return 1;

      else
      if(b%2==0)     return (mod(a,b/2,c)*mod(a,b/2,c))%c;

      else           return ((a%c)*mod(a,b-1,c))%c;
   }

int main(int argc, char *argv[])
{

   int a,b,c;
   scanf("%d %d %d", &a,&b,&c);
   printf("%d\n", mod(a,b,c));

 
 return 0;
}