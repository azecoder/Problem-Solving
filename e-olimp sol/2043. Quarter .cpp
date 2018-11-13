#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int N;
    scanf("%d",&N);

  if(N==1)
           printf("January\nFebruary\nMarch\n");
  if(N==2)
           printf("April\nMay\nJune\n");
  if(N==3)
           printf("July\nAugust\nSeptember\n");
  if(N==4)
           printf("October\nNovember\nDecember\n");


return 0;
}