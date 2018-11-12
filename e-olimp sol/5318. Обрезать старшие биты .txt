#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long n,a[1001],i=1,j,k,h,eded=0,p=1,b[1001],uzun=1;
  cin>>n>>k;


  while(n>=2)
  {
      a[i++]=n%2;
      n=n/2;
  }

  a[i]=n;

  for(j=i; j>=1; j--)
  b[uzun++]=a[j];

  uzun--;

  /*
  for(i=1; i<=(uzun-k); i++)
  b[i]=0;

  for(i=1; i<=uzun; i++)
  cout<<b[i];
  cout<<endl;
  */

  for(i=uzun; i>=(uzun-k+1); i--)
  {
      eded=eded+p*b[i];
      p=p*2;
  }

  cout<<eded<<endl;


  
  return EXIT_SUCCESS;
}