#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

long long i,j,k=1,n,flag,eded1,eded2,hasil,a[10001];

int main(int argc, char *argv[])
{
  scanf("%lld",&n);

  for(i=2; i<=n/2+1; i++)
  {
      if(n%i==0)
      {
          flag=0;

          for(j=2; j<=sqrt(i); j++)
          if(i%j==0)
          {
              flag=1;
              break;
          }

          if(flag==0)
          a[k++]=i;
      }

      if(a[1]*a[2]==n)
      {
          printf("%lld %lld\n",a[1],a[2]);
          return 0;
      }

  }

  flag=0;
  for(i=2; i<=sqrt(n); i++)
  if(n%i==0)
  {
      flag=1;
      break;
  }

  if(flag==0)
  a[k++]=n;


  for(i=1; i<k; i++)
  if(a[i]*a[i+1]==n)
  {
      eded1=a[i];
      eded2=a[i+1];
      break;
  }

  printf("%lld %lld\n",eded1,eded2);


  return EXIT_SUCCESS;
}