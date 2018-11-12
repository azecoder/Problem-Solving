#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstring>



using namespace std;
#define size 1001

int n;
int i;
int a[size],j;
int c,k;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0; i<n; i++)
       cin>>a[i];

   for(i=0; i<n-1; i++)
       for(j=0; j<n-1; j++){
           if(a[j]>a[j+1]){
               c=a[j];
               a[j]=a[j+1];
               a[j+1]=c;
               k++;
               }
           }
           cout<<k<<endl;


   
   return EXIT_SUCCESS;
}