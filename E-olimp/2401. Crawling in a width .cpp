#include <cstdlib>
#include <iostream>
#include <queue>
using namespace std;
long n,a,b,c[1000][1000],B[10000],D[1000],k,s,v;
int main(int argc, char *argv[])
{
   queue<long> q;


   cin>>n>>a>>b;
   for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)
           cin>>c[i][j];

   v=a;
   q.push(v);
   B[v]=1;
   k=0;
   s=0;

   while(!q.empty()){
       v=q.front();
//        cout<<D[v]<<endl;
       q.pop();
       if(v==b)k=1;
//        s++;
       for(int i=1;i<=n;i++)
           if(!B[i] && c[v][i]){B[i]=1;if(D[i]<D[v]+1)D[i]=D[v]+1; q.push(i);}
   }
   if(k)
       cout<<D[b]<<endl;
       else
       cout<<0<<endl;

   return EXIT_SUCCESS;
} 