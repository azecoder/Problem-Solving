#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long long ekob(unsigned long long a, unsigned long long b)
{
  unsigned long long x,y,c;
  x=a;
  y=b;

  while(b!=0)
  {
      a=a%b;
      c=a;
      a=b;
      b=c;
  }

  return x*y/a;
}

int main(int argc, char *argv[])
{
  unsigned long long i,n,a[31];
  cin>>n;

  for(i=1; i<=n; i++)
  a[i]=i;

  if(n==2)
  a[2]=ekob(a[1],a[2]);

  else if(n>=3)
  {
      a[2]=ekob(a[1],a[2]);
      for(i=3; i<=n; i++)
      a[i]=ekob(a[i],a[i-1]);
  }

  cout<<a[n]<<endl;




  return EXIT_SUCCESS;
}