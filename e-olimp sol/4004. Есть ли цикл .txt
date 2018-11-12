#include <iostream>

using namespace std;

int a[51][51],i,j,k,n;

int main()
{
  cin>>n;
  for(i=1; i<=n; i++)
      for(j=1; j<=n; j++)
          cin>>a[i][j];
          
  for(i=1; i<=n; i++)
          for(j=1; j<=n; j++)
              if(a[i][j]==1 && a[j][i]==1)
              {
                  cout<<1<<endl;
                  return 0;
              }
              
  for(k=1; k<=n; k++)
      for(i=1; i<=n; i++)
          for(j=1; j<=n; j++)
              if(a[i][k]==1 &&  a[k][j]==1 && a[j][i]==1)
              {
                  cout<<1<<endl;
                  return 0;
              }
              
  cout<<0<<endl;

  return 0;
}