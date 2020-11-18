#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int n;
#define size 101

int a[size];

using namespace std;

int main(int argc, char *argv[])
{
       cin>>n;
   int i;
       for(i=0; i<n; i++)
           cin>>a[i];

   int maxx,minn;
       maxx=a[0];
       minn=a[0];
       for(i=1; i<n; i++){
           if(a[i]>maxx)
               maxx=a[i];
           if(a[i]<minn)
               minn=a[i];
           }
       for(i=0; i<n; i++){
           if(a[i]==maxx) a[i]=minn;
           }
       for(i=0; i<n-1; i++)
           cout<<a[i]<<" ";
           cout<<a[n-1]<<endl;

   
   return EXIT_SUCCESS;
}