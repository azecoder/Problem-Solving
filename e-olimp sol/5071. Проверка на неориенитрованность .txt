#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int a[101][101],i,j,n,flag=0;
cin>>n;
for(i=1; i<=n; i++)
for(j=1; j<=n; j++)
cin>>a[i][j];

for(i=1; i<=n; i++)
for(j=1; j<=n; j++)
if((a[i][j]!=a[j][i]) || (i==j && a[i][j]!=0))
{
flag=1;
break;
}


if(flag==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;



 return EXIT_SUCCESS;
}