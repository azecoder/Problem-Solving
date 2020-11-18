#include <cstdlib>
#include <iostream>

using namespace std;

long long i,j,n,m,b,c,x[1000001],max1,max2,yadda;
char a;

int main(int argc, char *argv[])
{
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  scanf("%lld",&x[i]);
  scanf("%lld",&m);
  for(i=1; i<=m; i++)
  {
      cin>>a;
      scanf("%lld%lld",&b,&c);

      if(a=='Q')
      {
          max1=0;
          for(j=b; j<=c; j++)
          if(x[j]>max1)
          {
              max1=x[j];
              yadda=j;
          }

          max2=0;
          for(j=b; j<=c; j++)
          if(max1>=max2 && x[j]>=max2 && j!=yadda)
          max2=x[j];

          printf("%lld\n",max2+max1);
      }
      else if(a=='U')
      {
          x[b]=c;
      }
  }


  return EXIT_SUCCESS;
}