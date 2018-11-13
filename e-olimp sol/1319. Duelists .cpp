#include <cstdlib>
#include <iostream>

using namespace std;

double n;
int main(int argc, char *argv[])
{
  while(cin>>n)
  {
     cout.precision(6);
     cout<<fixed<<1 - ((60 - n)/60)*((60 - n)/60)<<endl;
  }
 return EXIT_SUCCESS;
}