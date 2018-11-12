#include <cstdlib>
#include <iostream>
#include <queue>
#include<cstring>
using namespace std;
int n,c[1000][1000],x,y,a,b,s=0,d,A[1000][1000];
queue<int> q;
int B[7000],D[7000];

int main(int argc, char *argv[])
{

   int max;

   cin>>x>>y;
   for(int i=1;i<=y;i++){
       cin>>a>>b>>d;
       A[a][b]=d;
       A[b][a]=d;
       c[a][b]=1;
       c[b][a]=1;
   }
   int v;
   for(int i=1;i<=x;i++)
       D[i]=1000000;
   v=1;
    D[v]=0;
   while(!B[v]){
       B[v]=1;
   max=100000;
       for(int i=1;i<=x;i++)
           if(!B[i] && D[i]>A[v][i] &&c[i][v]){
               D[i]=A[v][i];
           }


       v=1;
       for(int i=1;i<=x;i++)
           if(!B[i]  && D[i]<max){
               max=D[i];
               v=i;}
   }
   s=0;

   for(int i=1;i <=x;i++)
           s+=D[i];

       cout<<s<<endl;


  
   return EXIT_SUCCESS;
}