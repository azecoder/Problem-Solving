#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#define size 1001

long a[size];
long c[size];
long b[size];
int main(int argc, char *argv[])
{
   long n;
       cin>>n;
   long i;
       for(i=0; i<n; i++)
           cin>>a[i]>>b[i];
   long j;
   long c,d;
       for(i=0; i<n-1; i++){
           for(j=0; j<n-1; j++){
               if(b[j]<b[j+1]){
                   c=b[j];
                   b[j]=b[j+1];
                   b[j+1]=c;
                   d=a[j];
                   a[j]=a[j+1];
                   a[j+1]=d;
                   }
               else if(b[j]==b[j+1]){
                   if(a[j]>a[j+1]){
                       d=a[j];
                       a[j]=a[j+1];
                       a[j+1]=d;
                       }
                   }
               }
           }

       for(i=0; i<n; i++)
           cout<<a[i]<<" "<<b[i]<<endl;


   
   return EXIT_SUCCESS;
}