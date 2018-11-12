#include <cstdlib>
#include <iostream>

using namespace std;

int a[1000],c,i,j,n,k;
int main(int argc, char *argv[])
{
  cin>>n;
  for(i=0;i<n;i++)
     cin>>a[i];

  for(i=1;i<n;i++)
  {
      k=0;
      for(j=i-1;j>=0;j--)
      if(a[i]<a[j])
      {
          swap(a[i],a[j]); i=j; k=1;
      }
      else break;

      if(k==1)
      {
          for(j=0;j<n-1;j++)   cout<<a[j]<<" ";
          cout<<a[n-1]<<endl;
      }
  }

  return EXIT_SUCCESS;
}