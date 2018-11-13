#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;
#define size 100001

long a[size];
int main(int argc, char *argv[])
{
   long n;
       cin>>n;
   long i;
       for(i=0; i<n; i++)
           cin>>a[i];
   long j;
   long c;
       for(i=0; i<n-1; i++){
           for(j=0; j<n-1; j++){
               if(a[j]>a[j+1]){
                   c=a[j];
                   a[j]=a[j+1];
                   a[j+1]=c;
                   }
               }
           }
      cout<<a[0]<<" "<<a[1];
      cout<<endl;

   
   return EXIT_SUCCESS;
}