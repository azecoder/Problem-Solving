#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,n;
  cin>>n;

  for(i=1; i<=n; i++)
     if(i%2==1)   cout<<"9";
     else         cout<<"8";
  
  cout<<endl;

  return EXIT_SUCCESS;
}