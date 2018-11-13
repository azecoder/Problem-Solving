#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  long long n,i,flag=0;
  cin>>n;

  if(n==1)               cout<<"YES"<<endl;
  else if(n==2)          cout<<"NO"<<endl;
  else if(n==3)          cout<<"NO"<<endl;
  else if(n==4)          cout<<"NO"<<endl;
  else
  {
      for(i=2; i<=sqrt(n); i++)
         if(n%i==0)   flag=1;

      if(flag==0)       cout<<"NO"<<endl;
      else              cout<<"YES"<<endl;
  }

  return EXIT_SUCCESS;
}