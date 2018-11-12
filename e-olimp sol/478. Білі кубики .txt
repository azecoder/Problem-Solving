#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 100005


long long a,b,c,d,e;


int main(int argc, char *argv[])
{
   cin>>a>>b>>c;

   d=a*b*c;
   e=6*d-(2*a*b)-(2*a*c)-(2*b*c);

   cout<<d<<" "<<e<<endl;



   
   return EXIT_SUCCESS;
}