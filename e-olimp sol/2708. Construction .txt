#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  unsigned long int a,b,c,x,y,ekob;
  cin>>x>>y;
  
  a=x;
  b=y;
  
  while(b!=0)
  {
    a=a%b;
    c=a;
    a=b;
    b=c;
  }
  
  ekob=x*y/a;
  
  cout<<ekob-1<<endl;
    

  return EXIT_SUCCESS;
}