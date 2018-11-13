 #include <cstdlib>
#include <iostream>
#include <map>
#include <math.h>


using namespace std;
int a[19][19],n;
long g[270000],g1[270000];
long name(long  b[],long n){


   long v,mx=0,d=0,as;

   for(int i=1;i<=n;i++){
           as=1;
       for(int j=0;j<b[i]-1;j++)as*=2;
       d+=as;
   }
   if(g1[d])return g[d];
   v=b[n];

   long h[10000],l=0,s;

   if(n==2 && a[b[1]][b[2]]){g[d]=1;g1[d]=1; return 1;}
   if(n==2 && !a[b[1]][b[2]]){g[d]=0;g1[d]=1; return 0;}
   if(n==1)return 0;

   s=name(b,n-1);
   if(s>=mx)mx=s;

   if(n>=3)
   for(int i=1;i<n;i++){
       l=1;
       if(a[v][b[i]]){
           for(int j=1;j<n;j++)
               if(b[j]!=b[i])h[l++]=b[j];
           s=name(h,n-2)+1;
           if(s>mx)mx=s;

           }
   }

   g[d]=mx; g1[d]=1;
   return mx;
}
int main(int argc, char *argv[])
{

   char c;
   long b[10000];
   cin>>n;

   for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++){
           cin>>c;
           if(c=='N'){a[i][j]=0; a[j][i]=0;}
               else
               {a[i][j]=1; a[j][i]=1;}
       }

   for(int i=1;i<=n;i++)b[i]=i;

   cout<<name(b,n)*2<<endl;
   
   return EXIT_SUCCESS;
}