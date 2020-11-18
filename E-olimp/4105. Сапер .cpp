#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  char a[151][151];
  int i,j,n,m,k,b[12501],c[12501];
  cin>>n>>m>>k;
  for(i=1; i<=n; i++)
     for(j=1; j<=m; j++)
        a[i][j]='0';
  for(i=1; i<=k; i++)
  {
      cin>>b[i]>>c[i];
      a[b[i]][c[i]]='*';
  }

  for(i=1; i<=n; i++)
     for(j=1; j<=m; j++)
     {
         if(a[i][j]=='*')
         {
             if(a[i+1][j]!='*')   a[i+1][j]=a[i+1][j]+1;
             if(a[i-1][j]!='*')   a[i-1][j]=a[i-1][j]+1;
             if(a[i][j+1]!='*')   a[i][j+1]=a[i][j+1]+1;
             if(a[i][j-1]!='*')   a[i][j-1]=a[i][j-1]+1;
  
             if(a[i-1][j-1]!='*')   a[i-1][j-1]=a[i-1][j-1]+1;
             if(a[i-1][j+1]!='*')   a[i-1][j+1]=a[i-1][j+1]+1;
             if(a[i+1][j-1]!='*')   a[i+1][j-1]=a[i+1][j-1]+1;
             if(a[i+1][j+1]!='*')   a[i+1][j+1]=a[i+1][j+1]+1;
         }
     }

  for(i=1; i<=n; i++)
     for(j=1; j<=m; j++)
        if(a[i][j]=='0')   a[i][j]='.';

  for(i=1; i<=n; i++)
  {
      for(j=1; j<=m; j++)
         cout<<a[i][j];
      cout<<endl;
  }




  return EXIT_SUCCESS;
}