#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double mesafe(int x, int y, int x2, int y2)
{
return sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
}

int main(int argc, char *argv[])
{
  int i,j,r,n,a[101],b[101],say=0;
  scanf("%d%d",&n,&r);
  for(i=1; i<=n; i++)
  scanf("%d%d",&a[i],&b[i]);
  
  for(i=1; i<=n; i++)
  {
      for(j=1; j<=n; j++)
      if(mesafe(a[i],b[i],a[j],b[j])<=(double)r && i!=j)
      say++;
  }
  
  printf("%d\n",say/2);
  
 
  return EXIT_SUCCESS;
}