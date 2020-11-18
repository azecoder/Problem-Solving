#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c,h1,h2,h3,s,p;

int main(int argc, char *argv[])
{
scanf("%f%f%f",&a,&b,&c);
  if(p=(a+b+c)/2,
      s=sqrt(p*(p-a)*(p-b)*(p-c)),
      h1=2*s/a,
      h2=2*s/b,
      h3=2*s/c)
printf("%.2f %.2f %.2f\n",h1,h2,h3);
return 0;
}