#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int n,m,i,j,l=0,h,k,r;
   cin>>r>>n>>m;
   if(4*r*r>=n*n+m*m)
   cout<<"YES\n";
   else
   cout<<"NO\n";

   
   return EXIT_SUCCESS;
}