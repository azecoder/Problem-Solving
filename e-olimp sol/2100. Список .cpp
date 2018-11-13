#include <cstdlib>
#include <iostream>
#include <math.h>
#define pi 3.1415926535897932
//
using namespace std;


   long n,r,a[10000],s=0;

int main(int argc, char *argv[])
{

   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];

   }
   int k=0;
   for(int i=0;i<n-1;i++){
       if(a[i+1]-a[i]!=1)
           cout<<a[i]<<",";
           else{
               cout<<a[i]<<"-";
               while(a[i+1]-a[i]==1){
                   i++;

               }
               if(n-1==i)k=1;
               if(!k)
               cout<<a[i]<<",";
               else
               cout<<a[i]<<endl;
           }
   }
   if(!k)
   cout<<a[n-1]<<endl;



   return EXIT_SUCCESS;
}