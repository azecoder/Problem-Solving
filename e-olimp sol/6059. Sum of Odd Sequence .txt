#include <iostream>

using namespace std;

int i,x,n;

int main()
{
  cin>>x;
  for(i=1; i<=x; i++)
  {
      cin>>n;
      cout<<(n*n+2*n+1)/4<<endl;
  }

  return 0;
}