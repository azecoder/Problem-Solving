#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

long n,k,mini,maxi;
int main(int argc, char *argv[]) 
{
  cin>>n>>k;
  if(n%k==0)   mini=n/k;
  else         mini=n/k+1;
  maxi=n-k+1;
  cout<<mini<<" "<<maxi<<endl;
  
 return 0;
}