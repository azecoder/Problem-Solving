#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 10001


int n,m;
int i,j,a[size][size];
int b[size][size];
int sum;

int main(int argc, char *argv[])
{
   cin>>n>>m;

   for(i=0; i<n; i++)
       for(j=0; j<m; j++)
           cin>>a[i][j];

   for(i=0; i<n; i++)
       for(j=0; j<m; j++){
           cin>>b[i][j];
           if(b[i][j]==1)
           sum += a[i][j];
           }
           cout<<sum<<endl;


   return EXIT_SUCCESS;
}