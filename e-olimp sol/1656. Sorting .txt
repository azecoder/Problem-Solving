#include <cstdlib>
#include <iostream>

using namespace std;

bool cmp(int X, int Y)
{
  return X<Y;
}

int main(int argc, char *argv[])
{
  long long a[70001],b[70001],i,j=0,n;
  scanf("%lld",&n);
  for(i=0; i<n; i++)
  scanf("%lld",&a[i]);

  sort(a,a+n,cmp);

  for(i=0; i<n; i++)
  if(a[i]!=a[i+1])
  b[j++]=a[i];

  if(n%2==1)
  {
      for(i=0; i<=j-1; i++)
      printf("%lld\n",b[i]);
  }
  else
  {
      for(i=j-1; i>=0; i--)
      printf("%lld\n",b[i]);
  }

  
  return EXIT_SUCCESS;
}