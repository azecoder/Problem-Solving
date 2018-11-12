#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int i,n,x;
  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>x;

      if(x%2==0)
      cout<<x<<" is even"<<endl;
      else
      cout<<x<<" is odd"<<endl;
  }


  return EXIT_SUCCESS;
}