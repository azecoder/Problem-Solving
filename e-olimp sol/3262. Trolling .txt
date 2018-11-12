#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

long long t,say5,say3,z[10000],q,n,cur,vv=1,n1;
char a[10],b[10];

void f(){    
   if(n<5)
       return ;
       int son;
           long long k=1;
           int edde=0;
           int edd=0;
           for(int j=1;j<=1000000;j++)
               {
                   //edde=edds;
                   /*if(edd>n)
                       {
                           q=j-1;
                           
                           break;
                      }*/
                   if(j%2==1)
                       {
                           if(edd+k*5>n)
                               {
                                   //cur++;
                                   //z[cur]=8-son;
                                   //q=j-1;//q=j-1;
                                   n=n-edd;
                                   return ;
                               }
                           //son=5;
                           cur++;
                           k=k*5;
                           edd=edd+k;
                       }
                   else{
                       if(edd+k*3>n)
                               {
                                   //cur++;
                                   n-=edd;
                                   //z[cur]=8-son;
                                   //q=j-1;
                                   return ;
                               }
                       //son=3;
                       k=k*3;
                       cur++;
                       edd=edd+k;}
           //cout<<edd<<"  edd"<<endl;
               }
           
           
   
   }


int main()
{
   a[0]='h';
   a[1]='k';
   a[2]='m';
   a[3]='r';
   a[4]='t';
   b[0]='a';
   b[1]='o';
   b[2]='u';
   
   cin>>t;
   for(int i=1;i<=t;i++)
       {
           cur=0;
           
           memset(z,0,sizeof(z));
           scanf("%d",&n1);
           cout<<"Case #"<<i<<": ";
           n=n1;
           //for(int u=1;u<=15;u++)
               f();
               if(n!=0)
                   cur++;
               //cout<<n<<"  n"<<endl;
               //cout<<cur<<"   cur"<<endl;
           vv=1;
           for(int j=1;j<=cur;j++){
               
               if(j%2==1)
                   vv*=5;
               else
                   vv*=3;
               //cem+=vv;
               }
           n1=n;
           if(n>0)
           n=n-1;
           
           //cout<<vv<<"   vdsfds"<<endl;
           for(int j=1;j<=cur;j++)
               {
                   if(j%2==1)
                       vv/=5;
                   else
                       vv/=3;
                   //cout<<vv<<"   hesablanan"<<endl;
                   if(j%2==1)
                       {
                           for(long long o=4;o>=0;o--)
                               {
                                   if(o*vv<=n)
                                       {
                                           if(n1==0)
                                               cout<<a[4-o];
                                           else
                                           cout<<a[o];
                                           n=n-o*vv;
                                           break;
                                       }
                               }
                       }
                   else
                       {
                           for(long long o=2;o>=0;o--)
                               {
                                   if(o*vv<=n)
                                       {
                                           if(n1==0)
                                               cout<<b[2-o];
                                           else
                                           cout<<b[o];
                                           n=n-o*vv;
                                           break;
                                       }
                               }
                       }
               }
           //k=1;
           //n=n-edd;
           //edd=0;
           //cout<<son<<"  son"       <<endl;
           
           
               cout<<endl;
       }
   
   
   
   
   
   return EXIT_SUCCESS;
}