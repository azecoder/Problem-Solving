#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

long int gcd(long int a,long int b)
{
 return (b) ? gcd(b,a%b) : a;
}

long n,b[101],i,j,k,l,sum,m,t;
int main(int argc, char *argv[]) 
{
  cin>>n;
  for(t=1;t<=n;t++)
  {
     sum=0;
     cin>>m;
     for(i=1;i<=m;i++)   cin>>b[i];
     for(i=1;i<m;i++)
     for(j=i+1;j<=m;j++) sum+=gcd(b[i],b[j]);
     cout<<sum<<endl;
  }

  return 0;
}