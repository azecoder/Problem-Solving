#include <cstdlib>
#include <iostream>

using namespace std;
void ayt(long long a, long long b)
{
  long long x,y;
      if(a%2==0) a+=1;
      if(b%2==0) b-=1;
      x=((b-a)/2)+1;
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