#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  unsigned long long cem,n,say=0;

  while(cin>>n)
  {
      if(n==0)
      break;

      say++;
      cem=0;
      while(n>=5)
      {
          n=n/5;
          cem=cem+n;
      }
      cout<<"Case #"<<say<<": "<<cem<<endl;
  }

  
  return EXIT_SUCCESS;
}