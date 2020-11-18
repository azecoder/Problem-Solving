#include <iostream>

using namespace std;

int a[101],i,n,m,x,y,flag;

int main()
{
  cin>>n>>m;
  for(i=1; i<=m; i++)
  {
      cin>>x>>y;
      a[x]++;
      a[y]++;
  }

  for(i=1; i<100; i++)
      if(a[i]!=a[i+1])
      {
          flag=1;
          break;
      }

  if(flag==0)
      cout<<"YES"<<endl;
  else
      cout<<"NO"<<endl;
      
return 0;
}