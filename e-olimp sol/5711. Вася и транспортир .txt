#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int a,b,c;
int main(int argc, char *argv[])
{   cin>>a>>b;
   if(a+b>=180)
   cout<<"-1"<<endl;
   else
   cout<<(180-a-b)<<endl;
   return EXIT_SUCCESS;
}