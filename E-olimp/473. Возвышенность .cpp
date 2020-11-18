#include <iostream>
#include <set>

using namespace std;

int main()
{
  int i,a[6];
  cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
  
  if(a[1]==a[2] && a[2]==a[3] && a[3]==a[4] && a[4]==a[5])
      cout<<"yes";
  else if(a[1]>=a[2] && a[3]>=a[2])
      cout<<"no";
  else if(a[2]>=a[3] && a[4]>=a[3])
      cout<<"no";
  else if(a[3]>=a[4] && a[5]>=a[4])
      cout<<"no";
  else
      cout<<"yes";

  cout<<endl;

  return 0;
}