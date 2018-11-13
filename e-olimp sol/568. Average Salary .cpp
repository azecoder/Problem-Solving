#include <stdio.h>
#include <stdlib.h>

double a, b, c;
int k=0;
double avr;

int main(int argc, char *argv[])
{

while(scanf("%lf",&a)!=EOF)
{
    c+=a;
    k++;
}

  avr=c/k;

 printf("%.2lf\n",avr);

return 0;
}