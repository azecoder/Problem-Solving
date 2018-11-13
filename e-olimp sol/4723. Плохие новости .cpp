#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int i,n,k=0, a[1000000];

int main(int argc, char *argv[])
{
  cin>>n;
  
  for(i=0; i<n; i++)
     {
        cin>>a[i];
        if(a[i]==0)  k++;
     }
  cout<<k<<endl;

  return EXIT_SUCCESS;
}