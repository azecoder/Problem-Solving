#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int i,j,n,a[1001],b[11],temp,say=1;

int main(int argc, char *argv[])
{
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      scanf("%d",&say);
      
      for(j=1; j<=10; j++)    b[j]=0;
      
      for(j=1; j<=10; j++)
         scanf("%d",&b[j]);
      
      sort(b,b+1+10);
      printf("%d %d\n",say,b[8]);
  }

  return EXIT_SUCCESS;
}