#include <cstdlib>
#include <iostream>
#include <queue>

using namespace std;
long n,k,B[10000],D[10000],sum=0,v,a[1000],b[1000],c[1000][1000],max1;
int main(int argc, char *argv[])
{
 
  queue <int> s;
  cin>>n;
 
  max1=0;
  for(int i=1;i<=n;i++){
      cin>>a[i]>>b[i];
      c[a[i]][b[i]]=i;
   }

memset(B,0,sizeof(B));
  k=0;
  while(1){
   
      k=0;
       for(int i=1;i<=n;i++)
          if(B[i]==0){k=1; v=i; s.push(v);break;}
       
          if(k==0)break; else  sum++;
      while(!s.empty() ){
          v=s.front();
          B[v]=1;
          s.pop();
              if(!B[c[a[v]][b[v]-1]] && c[a[v]][b[v]-1])s.push(c[a[v]][b[v]-1]);
              if(!B[c[a[v]][b[v]+1]] && c[a[v]][b[v]+1])s.push(c[a[v]][b[v]+1]);
              if(!B[c[a[v]+1][b[v]-1]] && c[a[v]+1][b[v]-1])s.push(c[a[v]+1][b[v]-1]);
              if(!B[c[a[v]-1][b[v]-1]] && c[a[v]-1][b[v]-1])s.push(c[a[v]-1][b[v]-1]);
              if(!B[c[a[v]+1][b[v]]] && c[a[v]+1][b[v]])s.push(c[a[v]+1][b[v]]);
              if(!B[c[a[v]-1][b[v]]] && c[a[v]-1][b[v]])s.push(c[a[v]-1][b[v]]);
              if(!B[c[a[v]+1][b[v]+1]] && c[a[v]+1][b[v]+1])s.push(c[a[v]+1][b[v]+1]);
              if(!B[c[a[v]-1][b[v]+1]] && c[a[v]-1][b[v]+1])s.push(c[a[v]-1][b[v]+1]);
             
             
 
  }
}
  cout<<sum<<endl;
  
return EXIT_SUCCESS;
} 