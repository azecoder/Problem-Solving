#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;
#define size 10001
int main()
{
  char a[size];
  long n,m,k,p=1,i,cem=0;
  cin>>n>>k;

  if(k==0)   {   cout<<n<<endl;   return 0;    }

  itoa(n,a,2);
  m=strlen(a);

  for(i=m-1; i>=0; i--)
  {
      k--;
      a[i]='0';
      if(k==0)    break;
  }

  for(i=m-1; i>=0; i--)   {    cem+=p*(a[i]-48);   p*=2;    }

  cout<<cem<<endl;

  return 0;
}