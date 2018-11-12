#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
long long w,h,l,k,x,y,q;
double f;
int main(int argc, char *argv[])
{
   cin>>h>>w>>k;
   x=(int)k/h;
   q=x;
   if(w%x==0)y=w/x;
   else{
       q=w%x;
       y=ceil((double)w/x);
   }
   cout<<y<<" "<<(k-x*h)*y+h*(x-q)<<endl;

   return 0;
} 