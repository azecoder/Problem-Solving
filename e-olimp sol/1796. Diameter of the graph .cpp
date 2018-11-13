#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#define INF 10000000
using namespace std;
int a[102][102],d[102],used[102],n,i,j,k,q,f,s,index,big;
int dia = 0, rad = INF;
int x, y, l;

double p = 0, r = 0, v = 0;


void dij(int x)
{

used[x]=1;
for(int i=1; i<=n; i++)
   if(used[i]==0 && a[x][i]>0)
       d[i]=min(d[i],d[x]+a[x][i]);

}


int main()
{


cin>>n;

for(i =1 ; i <= n ; i ++)
for(j = 1 ; j <= n ; j ++)
{
    cin>>a[i][j];
        if(!a[i][j])
        a[i][j] = INF;
}
        
        
        



    for(f = 1 ; f <= n ; f ++)
{

    for(i = 1 ; i <= n ; i ++)
    {
        d[i] = INF;
        used[i] = 0;
    }

d[f]=0;





dij(f);



while(true)
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

 int temp = 0;
for(i =1 ; i <= n ; i ++)
{
   if(d[i] > dia && d[i] < INF)
   {
      dia = d[i];
      
   }
   if(d[i] > temp)
   temp = d[i];
   
   
}

       rad = min(rad, temp);
           
               }

            cout<<dia<<endl<<rad<<endl;

return 0;
}