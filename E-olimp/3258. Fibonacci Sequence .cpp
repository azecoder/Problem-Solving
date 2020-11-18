#include <stdio.h>
#include <stdlib.h>

long fib1,fib2,fib3;
long numbers, cvb;

int main(int argc, char *argv[])
{

     fib1 = 1;
     fib2 = 1;
     fib3;

   scanf("%ld",&numbers);

   if(numbers == 0)
       printf("0\n");
   else if(numbers < 2)
       printf("%ld\n",fib1);
   else if(numbers < 3 && numbers > 1)
       printf("%ld\n",fib2);
   else
   {


     for(cvb = 2; cvb < numbers; cvb++)
       {
          fib3 = fib1+ fib2;
          fib1 = fib2;
          fib2 = fib3;
       }
       printf("%ld\n",fib3);
   }


return 0;
}