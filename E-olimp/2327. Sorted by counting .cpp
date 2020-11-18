#include <cstdlib>
#include <iostream>

using namespace std;

long a[1000001],n,i;
bool cmp(int X, int Y)
{
return X<Y;
}

int main(int argc, char *argv[])
{
  scanf("%ld",&n);
  for(i=0; i<n; i++)   scanf("%ld",&a[i]);

  sort(a,a+n,cmp);
  for(i=0; i<n-1; i++)   printf("%ld ",a[i]);
  printf("%ld\n",a[n-1]);


  return EXIT_SUCCESS;
}