#include <cstdlib>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,a[101][101],b[101][101],x,k,s,c[101],t,bl[1001],qy[1001];
   vector <int > v[101];

int name(int x){
   if(bl[x])
       return qy[x];
   int g,mn=100000000;
   if(!v[x].size())
       return c[x];

   for(int i=0;i<v[x].size();i++)    {
       g=name(v[x][i]);
       if(mn>g)mn=g;
       }
   bl[x]=1;
   qy[x]=mn+c[x];
   return mn+c[x];

   }
int main(int argc, char *argv[])
{
   queue <int> q;

   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>c[i]>>k;
       for(int j=0;j<k;j++){
           cin>>x;
           a[i][x]=1;
           a[x][i]=1;
           v[i].push_back(x);
       }

   }
   cout<<name(1)<<endl;

   return 0;
} 