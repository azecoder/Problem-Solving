#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n;
    cin>>n;
  int fib[1001],i;

      fib[0]=1;
      fib[1]=1;
      i=2;
      while(n>fib[i-1])
           {
              fib[i]=fib[i-1]+fib[i-2];
              i++;
           }
         cout<<i-1;

  cout<<endl;

  
  return EXIT_SUCCESS;
}