#include <cstdlib>
#include <iostream>

using namespace std;
long a[100],i,j,k,l,m,n;
int main(int argc, char *argv[])
{cin>>n;
a[1]=2; a[2]=4; a[3]=6;
for(i=4;i<=n;i++){
 a[i]=a[i-1]+a[i-2];
}
cout<<a[n]<<endl;
return EXIT_SUCCESS;
}