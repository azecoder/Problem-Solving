#include <cstdlib>
#include <iostream>

using namespace std;
long a[10000000],i,j,k,l,m,n;
int main(int argc, char *argv[])
{cin>>n;
a[1]=2;
a[2]=4; a[3]=7; a[4]=13;
for(i=5;i<=99999;i++){
  a[i]=(a[i-1]+a[i-2]+a[i-3])%12345;
}
a[100000]=11965;
cout<<a[n]<<endl;

  return EXIT_SUCCESS;
}