#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
double a,b,h;
    scanf("%lf%lf%lf",&a,&b,&h);

double S_boyuk,S_kicik;
    S_boyuk=a*a; //     printf("%.1lf\n",S_oturacaq);
    S_kicik=b*b; //     printf("%.1lf\n",S_oturacaq);

double l;
    l=sqrt((b-a)*(b-a)/4+h*h); //      printf("%.1lf\n",l_b);

double A_surface;
    A_surface=4*l*(b+a)/2;


      printf("%.2lf\n",A_surface);

 
 return 0;
}