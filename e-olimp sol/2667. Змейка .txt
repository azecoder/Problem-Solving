#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>

long n,m,x,y;
long i,j,a;
using namespace std;

int main(int argc, char *argv[])
{

   cin>>n>>m>>x>>y;

   if(x%2)
       {
         a=m*(x-1)-1;
         cout<<a+y<<endl;
       }
   else
       {
         cout<<m*x-y<<endl;
       }

  
  return EXIT_SUCCESS;
}