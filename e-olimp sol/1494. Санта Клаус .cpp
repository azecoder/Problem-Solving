#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  unsigned int i,j,n,m,k,a[101],b[101],c[101],d[101],e[101],cavab;
  cin>>n>>m>>k;
  
  for(i=1; i<=m; i++)
  {
      cin>>a[i];
      c[i]=a[i];
  }
  for(i=1, j=m+1; i<=k, j<=m+k; i++, j++)
  {
      cin>>b[i];
      c[j]=b[i];
  }
  cout<<(n-(m+k))<<endl;
  
  for(i=1; i<=n; i++)     d[i]=1;
  for(j=1; j<=m+k; j++)   d[c[j]]--;
  
  j=1;
  for(i=1; i<=n; i++)   if(d[i]==1)   e[j++]=i;
  
  cavab=j-1;
  for(i=1; i<cavab; i++)   cout<<e[i]<<" ";
  cout<<e[cavab]<<endl;    
  

  return EXIT_SUCCESS;
}