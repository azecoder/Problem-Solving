#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int n;
     cin>>n;
   int fib[1001],i;
   if(n==0 || n==1)  cout<<"1";
   else
      {
         fib[0]=1;
         fib[1]=1;
         for(i=2; i<=n ; i++)
            {
               fib[i]=fib[i-1]+fib[i-2];
            }
          cout<<fib[n];
      }
   cout<<endl;

   
   return EXIT_SUCCESS;
}