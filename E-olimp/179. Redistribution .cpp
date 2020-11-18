#include <cstdlib>
#include <iostream>

using namespace std;
long long a[1000001],b[1000001],i,j,k,l,m,n;
int main(int argc, char *argv[])
{cin>>n;
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
  cin>>b[i];
m=0;
for(i=0;i<n;i++){
  if(b[i]>a[i]){
      m+=b[i]-a[i];
  }
}
cout<<m<<endl;
    return EXIT_SUCCESS;
}