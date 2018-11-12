#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int fib1,fib2,fib3;
      fib1 = 1;
      fib2 = 1;
      fib3;

int numbers;
    scanf("%d",&numbers);

    if(numbers < 2)
        printf("%d\n",fib1);
    else if(numbers < 3 && numbers > 1)
        printf("%d\n%d\n",fib1,fib2);
    else
    {    printf("%d\n%d\n",fib1,fib2);

int cvb;
      for(cvb = 2; cvb < numbers; cvb++)
        {
           fib3 = fib1+ fib2;
           printf("%d\n",fib3);
           fib1 = fib2;
           fib2 = fib3;
        }
    }

return 0;
}