#include <stdio.h>
#include <stdlib.h>

long n;
int main(int argc, char *argv[])
{

   scanf("%ld",&n);

long i;
 if(n <= 100)
   {
       for(i=n; i<=100; i++)
          {  n+=11;  n-=10;  }
          if(n==101)    n=n-10;
              printf("%ld\n",n);
   }

 else if(n >= 101)
   { n-=10;   printf("%ld\n",n);
         }

 
 return 0;
}