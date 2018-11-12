#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

#define PI acos(-1.0)

double r, h, d1, a1 = 1, d2, a2 = 1, da, fi, l;
int main(int argc, char *argv[])
{

 while (scanf("%lf %lf %lf %lf %lf %lf",&r, &h, &d1, &a1, &d2, &a2) == 6)
 {
   a1 *= PI / 180; a2 *= PI / 180;
   da = fabs(a2 - a1);
   if (da > PI) da = 2*PI - da; 
   l = sqrt(r*r+h*h);
   fi = da * r / l;
   l = sqrt(d1*d1 + d2*d2 - 2*d1*d2*cos(fi));

   printf("%.2lf\n",l);
 }

 return EXIT_SUCCESS;
}