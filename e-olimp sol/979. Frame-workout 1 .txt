#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long a[1000];
  long long b,n,c,d,i,j;
  cin>>b;
  for(i=1;i<=b;i++)
  cin>>a[i];
  cin>>c>>d;
  for(i=b;i>=1;i--)
  if(a[i]==a[c]){
  n=a[c];
  break;
}
  for(i=1;i<=b;i++){
  if(a[i]==n)
  a[i]=a[d];}
  for(i=1;i<b;i++)
  cout<<a[i]<<" ";
  cout<<a[i]<<endl;
  return EXIT_SUCCESS;
}