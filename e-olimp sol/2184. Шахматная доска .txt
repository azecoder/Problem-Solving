#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long m,n,i,j,c;
  cin>>m>>n>>i>>j>>c;

  if(m%2==0 || n%2==0)   cout<<"equal"<<endl;
  else if(c==0)
  {
      if((i%2==0 && j%2==0) || (i%2==1 && j%2==1))    cout<<"black"<<endl;
      else
         cout<<"white"<<endl;
  }
  else
  {
      if((i%2==0 && j%2==0) || (i%2==1 && j%2==1))    cout<<"white"<<endl;
      else
         cout<<"black"<<endl;
  }

  return EXIT_SUCCESS;
}