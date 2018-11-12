#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int a[100001],n,i;
bool cmp(int X, int Y)
{
  return X<Y;
}

int main(int argc, char *argv[])
{
  int a[51],i,j,n,m,max,min,ferq;
  scanf("%d",&m);
  for(i=0; i<m; i++)
  {
      max=0;
      min=100001;
      ferq=0;

      scanf("%d",&n);
      for(j=0; j<n; j++)
      {
          scanf("%d",&a[j]);

          if(a[j]>max)
          max=a[j];
          if(a[j]<min)
          min=a[j];
      }

      sort(a,a+n,cmp);

      /*
      for(i=0; i<n-1; i++)
      cout<<a[i]<<" ";
      cout<<a[n-1]<<endl'
      */


      for(j=0; j<n-1; j++)
      if((a[j+1]-a[j])>ferq)
      ferq=a[j+1]-a[j];

      printf("Class %d\n",i+1);
      printf("Max %d, Min %d, Largest gap %d\n",max,min,ferq);

  }

  return EXIT_SUCCESS;
}