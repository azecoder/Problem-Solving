#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

long long a[100000001];

int main(int argc, char *argv[])
{
int i,n,say=1;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];

sort(a+1,a+1+n);

for(i=1;i<=n-1;i++)
{
   if(a[i]!=a[i+1])
   say++;
}


cout<<say<<endl;
return 0;
}