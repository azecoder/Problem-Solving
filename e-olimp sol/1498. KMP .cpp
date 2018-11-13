#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  char a[50001],b[50001];
  int i,j,k,n,m,say,say1=0,c[10001],t=1;
  cin>>a;
  cin>>b;
  
  n=strlen(a);
  m=strlen(b);
  
  for(i=0; i<n; i++)
  {
      say=0;
      for(j=i, k=0; j<(i+m), k<m; j++, k++)
         if(a[j]==b[k])   say++;
         else             break;

      if(say==m)       c[t++]=i;
  }
  
  for(i=1; i<t-1; i++)   cout<<c[i]<<" ";
  cout<<c[t-1]<<endl;
  
  
  return EXIT_SUCCESS;
}