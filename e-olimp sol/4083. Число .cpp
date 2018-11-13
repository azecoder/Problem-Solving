#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int n;
       cin>>n;
   int a,b,c;
       n-=150;
       a=n/100;
       b=n/10%10;
       c=n%10;
   cout<<a<<" "<<b<<" "<<c<<endl;

   
   return EXIT_SUCCESS;
}