#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long a[100001],i,j,n,flag=0;
  cin>>n;
  for(i=1; i<=n; i++)
  cin>>a[i];

  for(i=1; i<=n; i++)
  if(2*i<=n && a[i]<=a[2*i])
  continue;
  else if(2*i<=n && a[i]>a[2*i])
  {
      flag=1;
      break;
  }

  for(i=1; i<=n; i++)
  if(2*i+1<=n && a[i]<=a[2*i+1])
  continue;
  else if(2*i+1<=n && a[i]>a[2*i+1])
  {
      flag=1;
      break;
  }

  if(flag==0)   cout<<"YES"<<endl;
  else   cout<<"NO"<<endl;


  
  return EXIT_SUCCESS;
}