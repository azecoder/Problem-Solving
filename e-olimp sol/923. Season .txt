#include <stdio.h>
#include <stdlib.h>

int n;
int main(int argc, char *argv[])
{
 scanf("%d", &n);

 if(n==1 ||  n==2 || n==12)   printf("Winter\n");
 else if(3<=n && n<=5)        printf("Spring\n");
 else if(6<=n && n<=8)        printf("Summer\n");
 else if(9<=n && n<=11)       printf("Autumn\n");
 
 return 0;
}