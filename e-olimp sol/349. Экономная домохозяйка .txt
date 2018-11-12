#include <cstdlib>
#include <iostream>
#define pi 3.141592653589793
#include <math.h>

using namespace std;
long long n,r,say,sum,l;
double area,s;
int main(int argc, char *argv[])
{

   cin>>s>>r;
   area=pi*r*r;
   if(area>s)
       cout<<0<<endl;
       else{



   r*=2;
   sum=0;
   while(s>area){
       say=0;
       l=floor(s/r);
       say=floor(l/r);
       if(!say)break;
       sum+=say;

       s-=(double)say*area;



   }
   cout<<sum<<endl;

   }

   return EXIT_SUCCESS;
}