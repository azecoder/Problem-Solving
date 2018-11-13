#include <cstdlib>
#include <iostream>
#include <math.h>

long long a,b;

using namespace std;

int main(int argc, char *argv[])
{

  cin>>a>>b;


if(b==0)
  cout<<"ERROR"<<endl;

else
   {
     if(a%b==0)
       cout<<a/b<<endl;
     else
       cout<<"ERROR"<<endl;
   }


  
  return EXIT_SUCCESS;
}