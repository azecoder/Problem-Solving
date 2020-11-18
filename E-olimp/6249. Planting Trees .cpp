#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  
  
  
  long long a[100001],i,n,j=1,b[100001],max=0;
  scanf("%lld",&n);
  for(i=1; i<=n; i++)
  scanf("%lld",&a[i]);
  
  sort(a,a+1+n);
  
  
  for(i=n; i>=1; i--)
  b[j++]=a[i]+j+1;
  
  for(i=1; i<j; i++)
  if(b[i]>max)
  max=b[i];
  
  cout<<max<<endl;
  
 
  return EXIT_SUCCESS;
}