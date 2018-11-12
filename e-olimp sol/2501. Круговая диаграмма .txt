#include <cstdlib>
#include <iostream>
#include <math.h>
#define pi 3.1415926535897932

using namespace std;

double p;
   long n,r,a[10000],s=0;

int main(int argc, char *argv[])
{

   cin>>n>>r;
   for(int i=0;i<n;i++){
       cin>>a[i];
       s+=a[i];
   }
    p=(pi*r*r)/s;
    for(int i=0;i<n;i++){
       cout.setf(ios::fixed,ios::floatfield);
       cout.precision(9);
       cout<<p*a[i]<<endl;
   }

   return 0;
}