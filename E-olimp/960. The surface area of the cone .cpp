#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main(int argc, char *argv[])
{
double R,r,h;
    scanf("%lf%lf%lf",&R,&r,&h);

double l;
    l=sqrt((R-r)*(R-r)+h*h);

double S_boyuk,S_kicik;
    S_boyuk=PI*R*R;
    S_kicik=PI*r*r;

double A_surface;
    A_surface=PI*(r*(r+l)+R*(R+l));

      printf("%.2lf\n",A_surface);

 
 return 0;
}