#include <stdio.h>

using namespace std;

int main()
{
  int i,x,n,say=0;
  scanf("%d",&n);
  for(i=1; i<=n*n; i++)
  {
      scanf("%d",&x);
      if(x==1)
          say++;
  }

  printf("%d\n",say);

  return 0;
}