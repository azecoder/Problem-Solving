#include <cstdlib>
#include <iostream>
#include <stack>
#define inf 1000000000
using namespace std;
int x,y,n,m,a[101][101],b[101][101],w,v,c[101],mn;
bool bax[101],k,d[101][101];
int main(int argc, char *argv[])
{


  cin>>n>>m;
  for(int i=0;i<m;i++){
      cin>>x>>y>>w;
      a[x-1][y-1]=1;
      a[y-1][x-1]=1;
      if(!d[x-1][y-1]){
          b[y-1][x-1]=w;
          b[x-1][y-1]=w;
          d[x-1][y-1]=true;
          d[y-1][x-1]=true;
      }else{
          if(b[y-1][x-1]>w ){
              b[y-1][x-1]=w;
              b[x-1][y-1]=w;
          }


      }
  }
  cin>>x>>y;
  for(int i=0;i<n;i++)
      c[i]=inf;
  c[x-1]=0;

  while(1){
      mn=inf;
      k=false;
      for(int i=0;i<n;i++)
          if(!bax[i] && mn>=c[i]){
              mn=c[i];
              v=i;
              k=true;
          }

      if(!k)break;

      bax[v]=true;
      for(int i=0;i<n;i++)
          if(a[v][i] && !bax[i]){
              if(c[i]>(b[i][v]+c[v]))
                  c[i]=b[i][v]+c[v];
              }



  }
  if(c[y-1]!=inf)
      cout<<c[y-1]<<endl;
  else
      cout<<"-1\n";


  return EXIT_SUCCESS;
}