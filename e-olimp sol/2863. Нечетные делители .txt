#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   long n;
       cin>>n;
   long i,m;
       m=n;
       for(i=1; i<=n; i+=2)
           {
              if(m%i==0)  cout<<i<<endl;
           }
   
   return EXIT_SUCCESS;
}