#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,j,n,min=10000,a[100001],cem,yadda;
  char x[11];
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  scanf("%lld",&a[i]);

  for(i=1; i<=n; i++)
  {
      cem=0;
      itoa(a[i],x,10);

      for(j=0; j<strlen(x); j++)
      cem=cem+(x[j]-48);

      if(cem<=min)
      {
          min=cem;
          yadda=a[i];
      }
  }

  printf("%lld\n",yadda);


  return EXIT_SUCCESS;
}