#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
  int n,a,b[31],i,j,k=0;

 for(i=0; i<31; i++)
   b[i]=0;

  cin>>n;
  for(i=0; i<n; i++)
     {cin>>a; b[a]++;}


   for(i=0; i<31; i++)
       if(b[i]!=0)
          k++;


    cout<<k<<endl;

  return EXIT_SUCCESS;
}