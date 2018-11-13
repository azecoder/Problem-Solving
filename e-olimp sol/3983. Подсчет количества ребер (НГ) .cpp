#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>


using namespace std;
#define size 101

int n;
int a[size][size];
int i,j;
int k=0;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            cin>>a[i][j];

   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
           if(a[i][j]==1)
               k++;


       cout<<k/2<<endl;

   
   return EXIT_SUCCESS;
}