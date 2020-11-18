#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 100005


long long n;
long long i,k;
long long a[size];


int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0;i<n;i++)
       cin>>a[i];

   for(i=0;i<n;i++){
       a[i]=a[i]/2;
       if(a[i]%2==1){
           k++;
           }
       }

       cout<<k<<endl;



   
   return EXIT_SUCCESS;
}