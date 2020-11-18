#include <iostream>

using namespace std;

int main()
{
  long long a[65],i,p,x=1,y=1;

  a[0]=1;
  a[1]=1;

  for(i=2; i<=60; i++)
  {
      p=(x%10)+(y%10);
      x=(y%10);
      y=(p%10);

      a[i]=p%10;
  }

  while(cin>>x)
  {
      x%=60;
      cout<<a[x]<<endl;
  }


  return 0;
}