#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[10001],b[10001],i,j,n,m,flag=0;
  cin>>n>>m;

  for(i=1; i<=m; i++)
  cin>>a[i]>>b[i];

  for(i=1; i<m; i++)
      for(j=1; j<m; j++)
          if(a[j]>a[j+1])
          {
              swap(a[j],a[j+1]);
              swap(b[j],b[j+1]);
          }
          else if(a[j]==a[j+1] && b[j]>b[j+1])
              swap(b[j],b[j+1]);

  for(i=1; i<m; i++)
      if(a[i]==a[i+1] && b[i]==b[i+1])
      {
          flag=1;
          break;
      }

  if(flag==0)
      cout<<"NO"<<endl;
  else
      cout<<"YES"<<endl;



  return 0;
}