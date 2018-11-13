#include <cstdlib>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int fi(int n)
{
   int result = n;
   for(int i=2;i*i <= n;i++)
   {
       if (n % i == 0) result -= result / i;
       while (n % i == 0) n /= i;
       }
       if (n > 1) result -= result / n;
       return result;
   }
int main(int argc, char *argv[])
{
   long n,s=0;
   cin>>n;
   for(int i=2;i<=n;i++)
       s+=fi(i);
   cout<<s<<endl;

 
   return EXIT_SUCCESS;
}