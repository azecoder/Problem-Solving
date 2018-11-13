#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
  int i,say=0;
  long n;

  scanf("%ld",&n);

  n=n+1;

  for(i=1; i<=sqrt(n); i++)
  if(n%i==0)
      say++;

  if(sqrt(n)*sqrt(n)==n)
      printf("%d\n",say*2-1);
  else
      printf("%d\n",say*2);

  return 0;
}