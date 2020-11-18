#include <cstdlib>
#include <iostream>



using namespace std;
#define size 10001


int n;
int i,j,a[size][size];
int sum_1,sum_2;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0; i<n; i++)
       for(j=0; j<n; j++)
           cin>>a[i][j];

   for(i=0; i<n; i++){
       sum_1 += a[i][i];
       }
       cout<<sum_1<<" ";

   for(i=0; i<n; i++){
       sum_2 += a[i][n-1-i];
       }
       cout<<sum_2<<endl;


   
   return EXIT_SUCCESS;
}