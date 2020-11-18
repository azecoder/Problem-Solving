#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n,a[100],b[100],i,m,cemboy=0,cemgirl=0,x,y;
  cin>>n>>m;
  for(i=1; i<=n; i++)
     cin>>a[i]>>b[i];

  for(i=1; i<=n; i++)
  {
     cemboy=cemboy+a[i];
     cemgirl=cemgirl+b[i];
  }

  if(cemgirl%m==0)   x=cemgirl/m;
  else               x=1+cemgirl/m;

  if(cemboy%m==0)    y=cemboy/m;
  else               y=1+cemboy/m;

  cout<<x+y<<endl;


 
  return EXIT_SUCCESS;
}