#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int i,j,n,a[101],b[101],c[101],max,saymax,max2;
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  scanf("%d",&a[i]);
  
  max=0;
  for(i=1; i<=n; i++)
  if(a[i]>max)
  max=a[i];
  
  if(max<=0)
  {
      cout<<"0"<<endl;
      return 0;
  }
  
  for(i=1; i<=n; i++)
  b[i]=0;
  
  for(i=1; i<=n; i++)
  if(a[i]>0)
  b[i]++;
  
  saymax=0;
  
  for(i=1; i<=n; i++)
  {
      saymax=0;
      for(j=i; j<=n; j++)
      {
          if(b[j]==1)
          saymax++;
          else if(b[j]==0)
          break;
      }
      
      c[i]=saymax;
  }
  
  max2=0;
  for(i=1; i<=n; i++)
  if(c[i]>max2)
  max2=c[i];
  
  printf("%d\n",max2);
  
 
  return EXIT_SUCCESS;
}