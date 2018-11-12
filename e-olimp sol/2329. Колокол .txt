#include <iostream>
#include <algorithm>

using namespace std;

int a[30001],b[30001],i,n,j=1;

int main()
{  
  cin>>n;
  for(i=1; i<=n; i++)    cin>>a[i];

  sort(a+1,a+1+n);
  for(i=1; i<=n; i=i+2)  b[j++]=a[i];

  j=n;
  for(i=2; i<=n; i=i+2)  b[j--]=a[i];

  for(i=1; i<n; i++)
      cout<<b[i]<<" ";
  cout<<b[n]<<endl;


  return 0;
} 