#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 unsigned long long n,x;
 cin>>n;

 if(n==1)
 {
      cout<<"-1"<<endl;
      return 0;
  }

 if((n-1)%11!=0)
 cout<<"-1"<<endl;
 else
 {
     x=(n-1)/11*4;
     cout<<x<<endl;
 }

 return EXIT_SUCCESS;
}