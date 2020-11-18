#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  long n,i,j=1,k,a[10001],x,y,flag1,flag2,flag3=0;
  cin>>n;
  for(i=2; i<=n/2; i++)
     if(n%i==0)   a[j++]=i;

  a[j]=n;

  if(j==1)
  cout<<"NO"<<endl;
  else
  {
      for(i=1; i<=(j/2+1); i++)
      {
          flag1=0;
          flag2=0;

          x=a[i];
          y=n/a[i];
          for(k=2; k<=sqrt(x); k++)
          if(x%k==0)
          {
              flag1=1;    break;
          }

          for(k=2; k<=sqrt(y); k++)
          if(y%k==0)
          {
              flag2=1;    break;
          }

          if(flag1==0 && flag2==0)
          {
              cout<<"YES"<<endl;
              flag3=1;    break;
          }
      }
      if(flag3==0) cout<<"NO"<<endl;
  }

  return EXIT_SUCCESS;
}