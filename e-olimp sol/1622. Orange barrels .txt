#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n;
     cin>>n;
  
  if( n%100==11 || n%100==12 || n%100==13 || n%100==14 )   cout<<n<<" bochek"<<endl;
  else if( n%10==1 )                                       cout<<n<<" bochka"<<endl;
  else if( n%10==2 || n%10==3 || n%10==4 )                 cout<<n<<" bochki"<<endl;
  else                                                     cout<<n<<" bochek"<<endl;
  
  return EXIT_SUCCESS;
}