#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int a,b,c,orta,minn;
  cin>>a>>b>>c;

  if((a+b+c)%3!=0)
      cout<<"IMPOSSIBLE"<<endl;
  else
  {
      orta=(a+b+c)/3;

      minn=max(max((abs)(orta-a),(abs)(orta-b)),max((abs)(orta-b),(abs)(orta-c)));

      cout<<minn<<endl;
  }


  return 0;
}