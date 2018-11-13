#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double X1,Y1,X2,Y2,X3,Y3,  X0,Y0;
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long i, j;
long n, X[100001], Y[100001];
double S, A, Area;
int main(int argc, char *argv[])
{
scanf("%ld",&n);
for(i=0;i<n;i++)
scanf("%ld%ld",&X[i],&Y[i]);
S=0;
for(i=0;i<n-1;i++)
{
{
S+=(X[i]*Y[i+1]-X[i+1]*Y[i]);
}
A=(X[n-1]*Y[0]-X[0]*Y[n-1]);
}
Area=fabs((A+S)/2);

printf("%.1lf\n",Area);


 
 return 0;
}