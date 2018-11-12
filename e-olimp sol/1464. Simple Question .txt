#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long x;
  
  while(cin>>x)
  {   
      if(x==0)
      break;
      else if(x<0)
      {
          x=-x;
          cout<<-x*(x+1)/2+1<<endl;
      }
      else   cout<<x*(x+1)/2<<endl;
  }
  return EXIT_SUCCESS;
}