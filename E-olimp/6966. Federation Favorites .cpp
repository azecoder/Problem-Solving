#include <stdio.h>

int n;
int main()
{
  while(1)
  {
      scanf("%d",&n);

      if(n==-1)    break;

      if(n==6)
          printf("6 = 1 + 2 + 3\n");
      else if(n==28)
          printf("28 = 1 + 2 + 4 + 7 + 14\n");
      else if(n==496)
          printf("496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248\n");
      else if(n==8128)
          printf("8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064\n");
      else
          printf("%d is NOT perfect.\n",n);
  }


  return 0;
}