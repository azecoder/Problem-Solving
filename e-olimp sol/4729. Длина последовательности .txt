#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  int k=0,n;
  while(1)
       {
          cin>>n;

          if(n==0)  break;
          else      k++;
       }
  cout<<k<<endl;


 return EXIT_SUCCESS;
}