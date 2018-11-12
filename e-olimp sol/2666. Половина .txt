#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>

long n;
long a[101][101];
long i,j,c;
using namespace std;

int main(int argc, char *argv[])
{

   cin>>n;

   for(i=0; i<n; i++)
       for(j=0; j<n; j++){
           if(n==(i+j+1))  a[i][j]=0;
           else if(j<n-1 && (i+j+1)<n) a[i][j]=2;
           else a[i][j]=1;
           }


   for(i=0; i<n; i++){
       for(j=0; j<n; j++)
           {
           cout<<a[i][j];
           }
           cout<<endl;
       }

  
  return EXIT_SUCCESS;
}