#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long a,b,n,deq;
  cin>>a>>b>>n;

  if(n==0)   cout<<"0"<<endl;
  else
  {
      deq=n/60;
      if(n<60 || n%60!=0)       deq++;
      cout<<a+b*deq<<endl;
  }

  return EXIT_SUCCESS;
}