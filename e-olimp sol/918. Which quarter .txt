#include <stdio.h>
#include <stdlib.h>

double x,y;
int main(int argc, char *argv[])
{
 scanf("%lf%lf",&x,&y);
 if(x==0||y==0)
 printf("0\n");
 else
 if(x>0&&y>0)
 printf("1\n");
 else
 if(x<0&&y>0)
 printf("2\n");
 else
 if(x<0&&y<0)
 printf("3\n");
 else
 if(x>0&&y<0)
 printf("4\n");



return 0;
}