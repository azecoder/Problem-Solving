#include <cstdlib>
#include <iostream>

using namespace std;
void ayt(long long a, long long b)
{
  long long x,y;
      x=b-a+1;
  long long cvb;
      cvb=(a+b)*x/2;
      cout<<cvb<<endl;
}
int main(int argc, char *argv[])
{
   long long a,b;
      cin>>a>>b;
      ayt(a,b);

   
   return EXIT_SUCCESS;
}