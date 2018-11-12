#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  double a,b,c;
  long long netice;
  cin>>a>>b>>c;
  
  netice=(a+b+1e-9)/c;
  cout<<netice<<endl;   
 
  return EXIT_SUCCESS;
}