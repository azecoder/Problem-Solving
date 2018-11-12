#include <cstdlib>
#include <iostream>

using namespace std;

bool cmp(int x,int y)
{
  return x<y;
}

int main(int argc, char *argv[])
{
  long a[100000],i,j,n,temp;
  cin>>n;
  for(i=0; i<n; i++)
     cin>>a[i];

  sort(a,a+n,cmp);

  for(i=0; i<n-1; i++)
     cout<<a[i]<<" ";
  cout<<a[n-1]<<endl;

  
  return EXIT_SUCCESS;
}