#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
  int n,i,j,k,flag=0;
  char a[15];
  cin>>n>>k;

  itoa(n,a,2);

  for(i=strlen(a)-1, j=0; i>=0, j<strlen(a); i--, j++)
  if(k==j && a[i]=='0')
  {
      flag=1;
      break;
  }

  if(k+1>strlen(a))
      cout<<"NO"<<endl;
  else if(flag==0)
      cout<<"YES"<<endl;
  else
      cout<<"NO"<<endl;



  return 0;
}