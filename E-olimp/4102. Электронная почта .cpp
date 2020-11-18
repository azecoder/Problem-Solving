#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  char a[21],b[21];
  int i,n;

  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>a>>b;
      a[0]=a[0]+32;
      b[0]=b[0]+32;

      cout<<b<<"."<<a<<"@retratek.com"<<endl;
  }



  return EXIT_SUCCESS;
}