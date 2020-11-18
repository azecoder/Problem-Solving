#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  long long n;
  cin>>n;

  n=8*n+1;

  if(sqrt(n)*sqrt(n)!=n)    cout<<"-1"<<endl;
  else
  {
      n=-1+sqrt(n);

      if(n<0) cout<<"-1"<<endl;
      else    cout<<n/2<<endl;
  }

  return 0;
}