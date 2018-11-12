#include <iostream>
using namespace std;
int main()
{
  long long n;  cin>>n;
  n*=2;  n=(2+n)/2-1;   n*=(n+1);
  cout<<n*3+1<<endl;
  return 0;
}