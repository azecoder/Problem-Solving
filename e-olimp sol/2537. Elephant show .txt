#include <cstdlib>
#include <iostream>
#include <cstring>

  using namespace std;
      long b[100][100],d[1000][1000],d1[1000][1000];
  int name(long n, long m, long x,long y){
      long g=0;
      if(x>=n || y>=m )return 0;
      if(b[x-1][y]==1 && x-1>=0){b[x-1][y]=0; g+= 1+name(n,m,x-1,y);}
      if(b[x+1][y]==1 && x+1<n){b[x+1][y]=0; g+= 1+name(n,m,x+1,y);}
      if(b[x][y-1]==1 && y-1>=0){b[x][y-1]=0; g+= 1+name(n,m,x,y-1);}
      if(b[x][y+1]==1 && y+1<m){b[x][y+1]=0; g+= 1+name(n,m,x,y+1);}
      return g;
  }

  int main(int argc, char *argv[])
  {

      char a;
      long n,m,x,y,l;
      cin>>m>>n;
      while(n!=0 && m!=0){
          l=0;
          for(int i=0;i<n;i++)
              for(int j=0;j<m;j++){
                  cin>>a;
                  if(a=='A'){x=i;y=j;b[i][j]=3;}
                  if(a=='.')b[i][j]=1;
                  if(a=='#')b[i][j]=2;
              }
          l=name(n,m,x,y)+1;


          cout<<l<<endl;
          cin>>m>>n;
      }
 
      return 0;
  } 