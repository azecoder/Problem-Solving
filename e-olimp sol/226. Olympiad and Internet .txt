#include <iostream>

using namespace std;

int a[1001],n,sum=0,m,x,y,i,j,k;
int main(int argc, char *argv[]) 
{   
  cin>>n>>m;
  for(i=1;i<=m;i++)
  {
     cin>>a[i];
     sum+=a[i];
  }   
  
  x=sum-m+1;   
  if(n-x > 0)   cout<<n-x<<endl;
  else          cout<<"0"<<endl;
  
  return 0;
}