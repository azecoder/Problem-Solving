#include <iostream>
#include <cstring>

using namespace std;

#define size 501
char a[size],b[size],c[size];
int i,j=0,h,n,m,l,say,flag;

int main()
{
  cin>>n>>m>>a>>b;
  if(n==m)
  {
      for(i=n-1; i>=0; i--)
          if(a[i]==b[i])    c[i]='0';
          else                 c[i]='1';
  }
  else
  {
      if(n>m)
      {
          for(i=m-1, h=n-1; i>=0, h>=(n-m); i--, h--)
              if(a[h]==b[i])    {     j++;    c[n-j]='0';    }
              else             {    j++;    c[n-j]='1';    }

          for(i=(n-m-1); i>=0; i--)    c[i]=a[i];
      }
      else
      {
          for(i=n-1, h=m-1; i>=0, h>=(m-n); i--, h--)
              if(a[h]==b[i])   {    j++;    c[m-j]='0';    }
              else             {    j++;    c[m-j]='1';    }

          for(i=(m-n-1); i>=0; i--)    c[i]=a[i];
      }
  }

  l=strlen(c);
  for(i=0; i<l; i++)
      if(c[i]=='0')    say++;

  if(say==l)    cout<<"0";
  else
  {
      for(i=0; i<l; i++)
          if(c[i]=='0' && flag==0)    continue;
          else
          {
              cout<<c[i];
              flag=1;
          }
  }

  cout<<endl;

  return 0;
}