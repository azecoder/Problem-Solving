#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

long long i,j,n,a[50001],b[50001],cem1=0,cem2=0;
double sahe;

int main(int argc, char *argv[])
{
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
     scanf("%lld%lld",&a[i],&b[i]);

  for(i=1; i<=n-1; i++)
  {
      cem1+=a[i]*b[i+1];
      cem2+=b[i]*a[i+1];
  }

  cem1+=a[n]*b[1];
  cem2+=b[n]*a[1];
  sahe=fabs(cem1-cem2)/2;

  printf("%.10lf",sahe);
  for(i=1; i<=590; i++)     printf("0");
  printf("\n");

  return EXIT_SUCCESS;
}