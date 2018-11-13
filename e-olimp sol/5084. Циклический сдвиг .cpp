#include <iostream>

using namespace std;

long long i,n,yadda,a[100001],b[100001];
int main(int argc, char *argv[])
{
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  scanf("%lld",&a[i]);

  yadda=a[n];

  for(i=1; i<n; i++)
  b[i+1]=a[i];

  b[1]=yadda;

  for(i=1; i<n; i++)
  printf("%lld ",b[i]);
  printf("%lld\n",b[n]);
 

  return EXIT_SUCCESS;
}