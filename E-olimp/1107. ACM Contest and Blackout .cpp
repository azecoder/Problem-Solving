#include <cstdlib>
#include <iostream>
#include <queue>
#include<cstring>
#include <vector>
using namespace std;
long n,c[1000][1000],x,y,a,b,s=0,s1,d,A[1000][1000],n2[1000][1000],m2[1000][1000],m1[100],n1[100];
queue<long> q;

int max1,o;
int B[7000],D[7000];
long name(long x, long e, long r){
      int v;
  for(int i=1;i<=x;i++){
      D[i]=10000000;B[i]=0;}
  v=1;
   D[v]=0;
  while(!B[v]){
      B[v]=1;

  max1=1000000;
      for(int i=1;i<=x;i++)
          if(!B[i] && D[i]>A[v][i] &&c[i][v]  && ((e!=v || r!=i )&&( e!=i || r!=v ))){
              D[i]=A[v][i];
              if(e==0 && r==0){ n1[i]=v;
             m1[i]=i;}

          }


      v=1;
      for(int i=1;i<=x;i++)
          if(!B[i]  && D[i]<max1){
              max1=D[i];
              v=i;}
  }
  s=0;

   for(int i=1;i<=x;i++)
          s+=D[i];
          int l=0;
          for(int i=1;i<=x;i++)
           if(B[i]==0)l=1;
           if(l==1)return 100000000;
          return s;
       }

int main(int argc, char *argv[])
{

  cin>>x>>y;
  for(int i=1;i<=y;i++){
      cin>>a>>b>>d;
      A[a][b]=d;
      A[b][a]=d;
      c[a][b]=1;
      c[b][a]=1;
  }


   cout<<(s1=name(x,0,0))<<" ";
   for(int i=1;i<=x;i++){
           n2[n1[i]][m1[i]]=1;
           n2[m1[i]][n1[i]]=1;

       }

          int  min1=1000000;

   for(int i=1;i<=x;i++)
       for(int j=i+1;j<=x;j++)
           if(n2[i][j] && c[i][j]){o=name(x,i,j);//cout<<o<<endl;
               if(min1>o ){min1=o;  }}


       if(min1!=1000000)
       cout<<min1<<endl;
       else
       cout<<s1<<endl;


     return EXIT_SUCCESS;
} 