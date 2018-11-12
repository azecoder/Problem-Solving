#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n,p,a[10001],i,j;
  
  while(cin>>n)
  {
      i=0;
      
      while(n>=2)
     {
          a[i]=n%2;
          i++;
          n=n/2;
     }

     cout<<n;

     for(j=i-1; j>=0; j--)
     cout<<a[j];
     cout<<endl;
  }


  return EXIT_SUCCESS;
}