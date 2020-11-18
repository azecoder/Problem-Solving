#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
#define size 100001

int n;
int i,a[size];
int j,c;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0; i<n; i++)
       cin>>a[i];


   sort(a,a+n);
   for(i=0; i<n-1; i++)
       cout<<a[i]<<" ";

   cout<<a[n-1]<<endl;


   return EXIT_SUCCESS;
}