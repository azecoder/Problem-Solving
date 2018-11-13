#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   long long n;
   long p;
   cin>>n;
   for(int i=1000000;i>=0;i--)
       if(2*n>(long long)i*i+i && ((2*n-i*i-i)%(2*i+2))==0){p=i;break;}

   cout<<p+1<<endl;

   return EXIT_SUCCESS;
}