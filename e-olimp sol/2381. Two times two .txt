#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  short x,n=1,say=0,i,j,a[20],eded;

  while(cin>>x)
  {
      if(x==-1)   break;
      if(x!=0)    a[n++]=x;
      if(x==0)
      {
          for(i=1; i<n; i++)
          if(a[i]%2==1)    continue;
          else
          {
              eded=a[i];
              for(j=1; j<n; j++)
                 if(a[j]==(eded/2))    say++;
          }
          cout<<say<<endl;
      }
      if(x==0)
      {
          say=0;    n=1;
      }
  }

  return EXIT_SUCCESS;
}