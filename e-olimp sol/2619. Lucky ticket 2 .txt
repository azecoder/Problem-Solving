#include <stdio.h>

using namespace std;

long a[1000001],i,n;
long long cem,cem1;

int main()
{
  scanf("%ld",&n);
  for(i=1; i<=n; i++)
  {
      scanf("%ld",&a[i]);
      cem1+=a[i];
  }

  for(i=1; i<=n; i++)
  {
      cem+=a[i];

      if(cem1==2*cem)
      {
          printf("%ld\n",i);
          return 0;
      }
  }
  printf("-1\n");

  return 0;
}