#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>

using namespace std;
#define size 100005

int n,a[1000],k,m,i,j;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0;i<n;i++)
       cin>>a[i];

   for(j=0;j<n;j++)
      for(i=0;i<n-1;i++)
          if(a[i]<a[i+1]){
             m=a[i+1];
             a[i+1]=a[i];
             a[i]=m;
             }
   if(n==0)
        cout<<endl;
   else{
        for(i=0;i<n-1;i++)
            cout<<a[i]<<" ";

        cout<<a[n-1]<<endl;
        }



   
   return EXIT_SUCCESS;
}