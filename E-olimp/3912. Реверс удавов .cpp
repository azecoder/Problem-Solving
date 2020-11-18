#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  char a[1000001],b[11];
  long i=1,j,n,index=1;
  cin>>n;
  
  while(i<=n+1)
  {
      gets(b);
      
      for(j=strlen(b)-1; j>=0; j--)
      a[index++]=b[j];
      
      i++;
  }
  
  index--;
  
  for(i=index; i>=1; i--)
  cout<<a[i];
  cout<<endl;
  
 
  return EXIT_SUCCESS;
}