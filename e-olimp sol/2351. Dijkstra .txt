#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#define INF 10000000
using namespace std;
int a[2002][2002],d[2002],used[2002],n,i,j,k,q,f,s,index,big;


void dij(int x)
{

 used[x]=1;
 for(int i=1; i<=n; i++)
     if(used[i]==0 && a[x][i]>0)
         d[i]=min(d[i],d[x]+a[x][i]);

}


int main()
{


 scanf("%d%d%d",&n,&f,&s);


 for(i=1; i<=n; i++)
     for(j=1; j<=n; j++)
     {

        scanf("%d",&a[i][j]);
         if(a[i][j]<0)
             a[i][j]=INF;
         d[i]=INF;
     }

 d[f]=0;



 dij(f);



 while(used[s]==0)
 {

     index=0;
     big=INF;
     bool go=false;
     for(i=1; i<=n; i++)
         if(used[i]==0 && d[i]<big)
         {
             go=true;
             index=i;
             big=d[i];
         }
     if(go==false)
         break;
     dij(index);
 }

 if(d[s]==INF)
     puts("-1");
 else
     cout<<d[s]<<endl;


 return 0;
}