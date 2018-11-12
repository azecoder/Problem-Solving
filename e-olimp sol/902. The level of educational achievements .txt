#include <stdio.h>
#include <stdlib.h>

int n;
int main(int argc, char *argv[])
{
scanf("%d", &n);

 if(1<=n && n<=3)
   printf("Initial\n");

 else if(4<=n && n<=6)
   printf("Average\n");

 else if(7<=n && n<=9)
   printf("Sufficient\n");

 else if(10<=n && n<=12)
   printf("High\n");


return 0;
}