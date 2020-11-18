#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
  long long a[101];
int b,n,sum=0,i;
cin>>n;
for(i=1;i<=n;i++){
cin>>a[i];
sum=sum+a[i];
}
long long min;
min=a[1];
for(i=1;i<=n;i++)
if(min>a[i])
min=a[i];
cout<<sum-min<<endl;
   return EXIT_SUCCESS;
}