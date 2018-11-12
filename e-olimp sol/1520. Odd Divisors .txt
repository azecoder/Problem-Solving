#include <cstdlib>
#include <iostream>

using namespace std;

long long int F(long long n)
{
  if(n==1)  return 1;
  long long s=0;
  if(n%2)     s=(n+1)/2*((n-1)/2+1)+F(n/2);
  else        s=(n/2)*(n/2)+F(n/2);

  return s;
}

long long int n, i;

int main(int argc, char *argv[])
{
  while(cin>>n)
  cout<<F(n)<<endl;
 
  return EXIT_SUCCESS;
}