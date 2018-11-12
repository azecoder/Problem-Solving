#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,n,k,m;
  char a[10001];

  cin>>n>>k;

  itoa(n,a,2);

  m=strlen(a);

  if(a[m-k]=='1')
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;


  return EXIT_SUCCESS;
}