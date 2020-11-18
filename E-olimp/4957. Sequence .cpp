#include <iostream>
#include <stdlib.h>

using namespace std;

#define ll long long
#define MAX 10000

int main(int argc, char *argv[]) 
{
  ll n,p,i,f[MAX];
  while(cin >>n >> p && (n != 0 && p != 0))
  {
      
      if(p<n)
      cout << 0 << endl;
      else
      {
          f[1]=1;
          for(i=2;i<=n;i++)
          {
              f[i]=(i%p)*f[i-1];
              f[i]=f[i]%p;
          }
          
          cout << f[n]%p << endl;
      }
  }
  
  return 0;
}