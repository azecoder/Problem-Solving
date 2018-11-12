#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

long i,n,m,say;
long long cem,minn,p;
char a[25];

int main()
{
  scanf("%ld",&n);

  itoa(n,a,2);
  m=strlen(a);
  for(i=0; i<m; i++)    if(a[i]==49)    say++;

  p=1;
  for(i=0; i<say; i++)
  {
      cem+=p;
      p*=2;
  }

  minn=cem;
  p=1;
  cem=0;
  for(i=0; i<m; i++)
  {
      if(i>=m-say)    cem+=p;
      p*=2;
  }

  printf("%lld\n",cem-minn);

  return 0;
}