#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

long long i,n,a[1001],say=0,flag=0;

int main(int argc, char *argv[])
{
  cin>>n;
  for(i=1; i<=n; i++)   cin>>a[i];
  
  sort(a,a+1+n);   
  for(i=1; i<=n; i++)
     if(a[i]!=0)   flag++;
  
  if(flag==0)   say=1;
  for(i=1; i<=n; i++)
     if(a[i]!=a[i+1])   say++;
  
  cout<<say<<endl;
  
  return EXIT_SUCCESS;
}