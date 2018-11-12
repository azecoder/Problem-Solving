#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;

int a[101][101],b[101][101],n,m,i,j,mini,say=0;

int main(int argc, char *argv[]) 
{
  cin>>n>>m;

  for(i=1;i<=n;i++)
  for(j=1;j<=m;j++)
     cin>>a[i][j];
  for(i=1;i<=n;i++)
  for(j=1;j<=m;j++)
     cin>>b[i][j];

  mini=a[1][1];
  for(i=1;i<=n;i++)
  for(j=1;j<=m;j++)
     if(a[i][j]<mini)   mini=a[i][j];
  for(i=1;i<=n;i++)
  for(j=1;j<=m;j++)
     if(a[i][j]==mini && b[i][j]==0)   say++;

  cout<<say<<endl;

  return 0;
}