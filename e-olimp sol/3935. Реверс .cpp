#include <cstdlib>
#include <iostream>

using namespace std;
#define size 10001

int n;
int i,a[size];

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0; i<n; i++)
       cin>>a[i];

   for(i=n-1; i>0; i--)
       cout<<a[i]<<" ";

   cout<<a[0]<<endl;


   
   return EXIT_SUCCESS;
}