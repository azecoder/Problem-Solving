#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 10001


int n;
int i,j,a[size][size];
int s;

int main(int argc, char *argv[])
{
   cin>>n;

   s=1;
   for(i=0; i<n; i+=2)
       for(j=0; j<n; j++){
           a[i][j]=s;
           s++;
           if(j==n-1) s+=n;
           }
   s=n+1;
   for(i=1; i<n; i+=2)
       for(j=n-1; j>=0; j--){
           a[i][j]=s;
           s++;
           if(j==0) s+=n;
           }



   for(i=0; i<n; i++)
       for(j=0; j<n; j++){
           cout<<a[i][j];
           if(j==n-1)
               cout<<endl;
           else
               cout<<" ";
           }



   
   return EXIT_SUCCESS;
}