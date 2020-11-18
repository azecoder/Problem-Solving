#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 long long int n,k=1,netice=1;
  cin>>n;

  while(k<=n)
  {
          k*=2;
          if(n%k==0)      netice=k;
  }
  cout<<netice<<endl;
 
  return EXIT_SUCCESS;
}