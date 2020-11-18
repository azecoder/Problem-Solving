#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
long long n;
double a;
int main(int argc, char *argv[])
{
  cin>>n;
  a = log(n)/log(2);
  if(a==(int)a)      cout<<"I="<<a<<endl;
  else               cout<<(int)a<<"<I<"<<(int)a+1<<endl;
  
  return EXIT_SUCCESS;
}