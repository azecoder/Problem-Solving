#include <cstdlib>
#include <iostream>

using namespace std;

#define size 100
int n,m,cerime,c=0,a[size][size];

int main(int argc, char *argv[])
{

  cin>>n>>m>>cerime;

  for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
        cin>>a[i][j];

  for(int j=1;j<=m;j++)
     for(int i=1;i<=n;i++)
        if(a[i][j]*2<a[i+1][j])   c=c+cerime;
  
  cout<<c<<endl;

  return EXIT_SUCCESS;
}