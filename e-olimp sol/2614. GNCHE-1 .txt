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

   int i,j,k;
       k=1;
       if(n!=0)
           {
               cout<<"1";
               if(n==2) cout<<" 2"<<endl;
               else
                   {
                   for(i=2; i<n; i++){
                       for(j=1; j<=i; j++){
                           cout<<" "<<i; k++; if(k==n) goto bura;
                           }
                       }
                bura:
                    cout<<endl;
                   }
               }
   
   return EXIT_SUCCESS;
}