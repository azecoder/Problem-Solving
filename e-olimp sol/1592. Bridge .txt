#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
long t[1001],g[10000][3],q[10000],i,j,k,l,m;
int main(int argc, char *argv[])
{  
 
  while(cin>>m){k=0;
      for(i=1;i<=m;i++)
          cin>>t[i];
      sort(t+1,t+1+m);i=1;
     
      while(m>=4){
         
          if(t[m]+2*t[2]+t[1]>t[m]+t[m-1]+2*t[1])
              {k=k+t[m]+t[m-1]+2*t[1];
                  g[i][1]=t[1];
                  g[i][2]=t[m];
                  q[i]=t[1];
                  i++;
                 
                  g[i][1]=t[1];
                  g[i][2]=t[m-1];
                  q[i]=t[1];
         
                  m=m-2;i++; }
          if(t[m]+2*t[2]+t[1]<=t[m]+t[m-1]+2*t[1])
              {k=k+t[m]+2*t[2]+t[1];
               g[i][1]=t[1];
               g[i][2]=t[2];
               q[i]=t[1];
               i++;
               g[i][1]=t[m-1];
               g[i][2]=t[m];
               q[i]=t[2];
               i++;
               m=m-2;
               
               
                 
                 
                  }}
          if(m==3){k=k+t[1]+t[2]+t[3];
              g[i][1]=t[1];
              g[i][2]=t[2];
              q[i]=t[1];
              i++;
              g[i][1]=t[1];
              g[i][2]=t[3];              
              }
          if(m==2){  k=k+t[2];
              g[i][1]=t[1];
              g[i][2]=t[2];}
         
         
         
      if(m==1){cout<<t[1]<<endl<<t[1]<<endl; }
      else{cout<<k<<endl;
          for(j=1;j<=i-1;j++)
              {cout<<g[j][1]<<" "<<g[j][2]<<endl; cout<<q[j]<<endl;
                 
                  }
              cout<<g[i][1]<<" "<<g[i][2]<<endl;
         
         
         
          }
          memset(g,0,sizeof(g));
          memset(q,0,sizeof(q));
          memset(t,0,sizeof(t));
     
         
}
  return EXIT_SUCCESS;
} 