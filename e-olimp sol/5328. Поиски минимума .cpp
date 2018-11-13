#include <cstdlib>
#include <iostream>

using namespace std;
#define size 10001

int n;
int i,a[size];
int minn;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=0; i<n; i++)
       cin>>a[i];

   minn=a[0];
   for(i=0; i<n; i++){
       if(minn>a[i]) minn=a[i];
       }

   cout<<minn<<endl;


   
   return EXIT_SUCCESS;
}