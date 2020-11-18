#include <cstdlib>
#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{
  char a[21],b[21];
  int i,j,k,n,flag;
  cin>>n;
  for(i=1; i<=n; i++)
  {
      cin>>a;
      cin>>b;

      for(j=0; j<strlen(a)-1; j++)
      {
          flag=0;

          for(k=0; k<strlen(a)-1; k++)
          if(a[k]>a[k+1])
          {
              swap(a[k],a[k+1]);
              flag=1;
          }

          if(flag==0)
          break;
      }

      for(j=0; j<strlen(b)-1; j++)
      {
          flag=0;

          for(k=0; k<strlen(b)-1; k++)
          if(b[k]>b[k+1])
          {
              swap(b[k],b[k+1]);
              flag=1;
          }

          if(flag==0)
          break;
      }

      if(strcmp(a,b))
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
  }


  return EXIT_SUCCESS;
}