#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 101

long long i=0,m[size];
long long n,k,a,b,x,t;


int main(int argc, char** argv)
{
   cin>>n>>a>>b;
   while(n!=0)
       {
            m[i]=n%10;
            i++;
            k++;
            n/=10;
       }
   for(i=k-1; i>=0; i--)
        if(m[i]==a)
           m[i]=b;


   t=1;
   for(i=0; i<k; i++){
        x+=m[i]*t;
        t=t*10;
       }

       cout<<x<<endl;


  return EXIT_SUCCESS;
}