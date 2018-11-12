#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,j,x,a[100001],say=2,n;
  cin>>n;
  for(i=0; i<=35; i++)
  {
      x=1;
      a[1]=1;

      for(j=0; j<=i; j++)
      {
          x=x*(i-j)/(j+1);
          if(x==0)       x=1;
          a[say++]=x;
      }
  }
  cout<<a[n]<<endl;


  return EXIT_SUCCESS;
}