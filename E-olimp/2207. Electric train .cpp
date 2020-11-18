#include <cstdlib>
#include <iostream>

using namespace std;

long long x,y,i,n,yaddadeq,yaddasaat,a[1000001];
char z;

int main(int argc, char *argv[])
{
  cin>>x>>z>>y>>n;
  for(i=1; i<=n-1; i++)   cin>>a[i];

  if(x<10 && y<10)   cout<<"0"<<x<<z<<"0"<<y<<endl;
  else if(x<10)      cout<<"0"<<x<<z<<y<<endl;
  else if(y<10)      cout<<x<<z<<"0"<<y<<endl;
  else               cout<<x<<z<<y<<endl;

  for(i=1; i<=n-1; i++)
  {
      y+=a[i];
      if(y>=60)
      {
          yaddadeq=y/60;
          y-=(60*yaddadeq);
          x+=yaddadeq;
      }
      if(x>=24)
      {
          yaddasaat=x/24;
          x-=(24*yaddasaat);
      }
      if(x<10 && y<10)       cout<<"0"<<x<<z<<"0"<<y<<endl;
      else if(x<10)          cout<<"0"<<x<<z<<y<<endl;
      else if(y<10)          cout<<x<<z<<"0"<<y<<endl;
      else                   cout<<x<<z<<y<<endl;
  }

  return EXIT_SUCCESS;
}