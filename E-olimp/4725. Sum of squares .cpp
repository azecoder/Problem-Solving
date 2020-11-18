#include <cstdlib>
#include <iostream>

long n,i;
long sum;

using namespace std;

int main(int argc, char *argv[])
{
   cin>>n;

   for(i=1; i<=n; i++){
       sum+=(i*i);
       }

   cout<<sum<<endl;

   
   return EXIT_SUCCESS;
}