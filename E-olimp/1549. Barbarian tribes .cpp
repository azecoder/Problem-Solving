#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
  int n, m, k;
  while(cin>>n>>m>>k)
  {
      if( n == 0 && m == 0 && k == 0 )    break;
      if( m%2 == 0 )           cout<<"Gared"<<endl;
      else                     cout<<"Keka"<<endl;
  }
  return EXIT_SUCCESS;
}