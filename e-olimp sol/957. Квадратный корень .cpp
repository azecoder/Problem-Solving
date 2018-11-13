#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int a;
   scanf("%d",&a);

int b,c,d;
   b=a/100;
   c=a/10%10;
   d=a%10;

int sum;
double root;
   sum=b+c+d;
   root=pow(sum,0.5);

   printf("%.3lf\n",root);

 
 return 0;
}