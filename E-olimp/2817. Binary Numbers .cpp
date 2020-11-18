#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,j,n,m,t,h,say,b[10001];
  char a[10001];

  cin>>t;
  for(h=1; h<=t; h++)
  {
      say=0;
      cin>>n;

      itoa(n,a,2);

      m=strlen(a);

      for(i=m-1, j=0; i>=0, j<m; i--, j++)
      if(a[i]=='1')
      b[say++]=j;

      say--;

      for(i=0; i<say; i++)
      cout<<b[i]<<" ";
      cout<<b[say]<<endl;
  }

  return EXIT_SUCCESS;
}