#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
   double a,b,c;
       cin>>a>>b>>c;
   double i,y;
       for(i=a; i<=b; i+=c)
           {
              y=3*(sin(i));
              printf("%.3lf %.3lf",i,y);
              cout<<endl;
           }
   
   return EXIT_SUCCESS;
}