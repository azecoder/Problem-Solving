#include <cstdlib>
#include <iostream>

using namespace std;
#define size 10001

int n;
int i,j,a[size];
int c;

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
               }
           }

   cout<<a[0]<<" "<<a[1]<<endl;


   
   return EXIT_SUCCESS;
}