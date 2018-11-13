#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
  long long i,j,k=0,x,n,a[101][101];
  cin>>x;
  cin>>n;
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  cin>>a[i][j];
  for(j=1;j<=n;j++){
  k=0;
  for(i=1;i<=n;i++)
  if(a[i][j]==x){
                 k++;
                 }
  if(k!=0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
}
 
  return EXIT_SUCCESS;
}