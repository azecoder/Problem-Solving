#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
double Volume,h;
    scanf("%lf%lf",&Volume,&h);

double S_oturacaq;
    S_oturacaq=3*Volume/h; //     printf("%.1lf\n",S_oturacaq);

double a;
    a=sqrt(S_oturacaq);  //       printf("%.1lf\n",a);

double l,S_yan;
    l=sqrt(a*a/4+h*h);
    S_yan=4*a*l/2; //      printf("%.1lf\n",S_yan);

double A_surface;
    A_surface=S_yan;

      printf("%.1lf\n",A_surface);

 
 return 0;
}