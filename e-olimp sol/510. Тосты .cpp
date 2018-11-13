//Insertion Sort
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
 long a,b,s;
 cin>>a>>b;
 if(a>b)
   {
       s=ceil((double)a/b);s*=2;
       a-=(b-a%b);
       s+=(a/b)*2;
       if(a%b)s+=2;
       cout<<s<<endl;}
   else
   if(a)
   cout<<4<<endl;
   else
   cout<<0<<endl;
  
   return EXIT_SUCCESS;
}