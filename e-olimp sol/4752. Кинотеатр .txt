#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 10001


int n,m;
int i,j,a[size][size];
int s;
int b[size][size];
int k;

int main(int argc, char *argv[])
{
   cin>>n>>m;

   s=1;
   for(i=n-1; i>=0; i--)
       for(j=0; j<m; j++){
           a[i][j]=s;
           s++;
           }


   s=1;
   for(j=0; j<m; j++)
       for(i=n-1; i>=0; i--){
           b[i][j]=s;
           s++;
           }




   for(i=0; i<n; i++)
       for(j=0; j<m; j++){
           if(a[i][j]==b[i][j])
               k++;
           }
           cout<<k<<endl;



   
   return EXIT_SUCCESS;
}