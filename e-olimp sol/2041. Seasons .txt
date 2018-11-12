#include <stdio.h>
#include <stdlib.h>

int a;
int main(int argc, char *argv[])
{
  scanf("%d",&a);

 if(a==1)
       printf("Spring\nMarch\nApril\nMay\n");
 if(a==2)
       printf("Summer\nJune\nJuly\nAugust\n");
 if(a==3)
       printf("Autumn\nSeptember\nOctober\nNovember\n");
 if(a==4)
       printf("Winter\nDecember\nJanuary\nFebruary\n");

return 0;
}